#include "Map.hpp"


Map::Map(int row, int col, int value){
    this->value = value;
    arr = new Node*[row+2];
    for(int i = 0; i < row+2 ; i++){
        arr[i] = new Node[col+2];
        for(int j = 0; j < col+2; j++){
            if((i > 0 and i < row+1) and (j > 0 and j < col+1) )
                arr[i][j].value = value; 
        }   
    }

    this->row = row+1;
    this->col = col+1;
    this->act_row = row+2;
    this->act_col = col+2;

    setAdamState();
    displayMap();

    for(int i = 1; i < row+1; i++){
        for(int j = 1; j < col+1; j++){
            arr[i][j].North        = &arr[i-1][j]; 
            arr[i][j].North_East   = &arr[i-1][j+1];      
            arr[i][j].East         = &arr[i][j+1];
            arr[i][j].South_East   = &arr[i+1][j+1];      
            arr[i][j].South        = &arr[i+1][j]; 
            arr[i][j].South_West   = &arr[i+1][j-1];      
            arr[i][j].West         = &arr[i][j-1];
            arr[i][j].North_West   = &arr[i-1][j-1];      
            
            
            arr[i][j].setDefaultState(this->num_state);
            arr[i][j].setSurrondingNodes();
            
        }
    }
}

Map::~Map(){
    for(int i = 0; i < row ; i++)
            delete[] arr[i] ;
    delete[] arr ;
    arr = nullptr; 
}

void Map::setAdamState(){
    string rules = "";

    char answer = 'n';
    vector<int> values;

    cout << "How many states/titles are we working with: ";
    cin >> this->num_state;

    for(int i = 1; i <= this->num_state; i++){
        cout << "Enter rules for state " << i << " !!!" << endl;

        cout << "Enter the rules: ";
        getline(cin >> ws, rules);
        
        for(int i = 0 ; i < rules.length(); i++){
            if(isdigit(rules[i]))
                values.push_back(int(rules[i]) - int('0'));

        }
        adam_state.insert(pair<int , vector<int> >(i, values));
        values.clear();
    }  
    
    
    cout << "Current States and Rules" << endl;
    for (itr = adam_state.begin(); itr != adam_state.end(); ++itr) {
        cout << '\t' << itr->first << '\t'<<  "{ ";
            for(int i = 0; i < itr->second.size(); i++)
                cout << itr->second[i] << " ";

        cout << "}" << endl;
    }
}

void Map::WaveCollapse(){
    int rand_row = 0;
    int rand_col = 0;
    Node* master;

    do{
        rand_row = rand()%(row-1) + 1;
        rand_col = rand()%(col-1) + 1;
        master = &arr[rand_row][rand_col];
    }
    while(master->getStateSize() == 1);

    int rand_value = rand()%(master->getStateSize());
    
    int* state = master->getState();

    master->value =  state[rand_value];

    int state_arr[] = {state[rand_value]};
    master->setState(state_arr , 1);

    //Need to delete later
    cout << "rand_row: " << rand_row << endl;
    cout << "rand_col: " << rand_col << endl;
    cout << "rand_value: " << rand_value << endl;
    
    //Update the surronding nodes
    // for(int i = 0; i < 8 ; i++){
    //    if(master->sur_Node[i]->value != 0){
    //         master->sur_Node-;
    //    }
    // }
   
}

void Map::displayMap(){
    for(int i = 1; i < row; i++){
        cout << "[";
        for(int j = 1; j < col; j++)
            cout <<" "<< arr[i][j].value << " ";
        cout << "]"<< endl;
    }
}

void Map::actualMap(){
    cout << endl;

    for(int i = 0; i < act_row; i++){
        cout << "[";
        for(int j = 0; j < act_col; j++)
            cout <<" "<< arr[i][j].value << " ";
        cout << "]"<< endl;
        
    }

    cout << endl;
}

void Map::connections(){
    for(int i = 1; i < row; i++){
        for(int j = 1; j < col; j++){
            cout << arr[i][j];
        }
    }
}

void Map::MapState(){
    for(int i = 1; i < row; i++){
        cout << "[";
        for(int j = 1; j < col; j++){
            cout << " ";
            arr[i][j].displayState();
            cout << " ";
        }
        cout << "]"<< endl;
        
    }
}

ostream& operator<<(ostream& os, const Map& map);