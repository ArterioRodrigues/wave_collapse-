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
            
            
            arr[i][j].setDefaultState(value);
            arr[i][j].displayState();
        }
    }

    this->row = row+1;
    this->col = col+1;
    this->act_row = row+2;
    this->act_col = col+2;
}

Map::~Map(){
    for(int i = 0; i < row ; i++)
            delete[] arr[i] ;
    delete[] arr ;
    arr = nullptr; 
}

void Map::WaveCollapse(){
    int rand_row = rand()%(row-1) + 1;
    int rand_col = rand()%(col-1) + 1;
    int rand_value = rand()%(value+1);
    
    arr[rand_row][rand_col].value =  rand_value;

    cout << "rand_row: " << rand_row << endl;
    cout << "rand_col: " << rand_col << endl;
    cout << "rand_value: " << rand_value << endl;
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
    for(int i = 0; i < act_row; i++){
        cout << "[";
        for(int j = 0; j < act_col; j++){
            cout << " ";
            arr[i][j].displayState();
            cout << " ";
        }
        cout << "]"<< endl;
        
    }
}
ostream& operator<<(ostream& os, const Map& map);