#include "Map.hpp"


Map::Map(int row, int col, int value){
    arr = new Node*[row+2];
    for(int i = 0; i < row+2 ; i++){
        arr[i] = new Node[col+2];
        for(int j = 0; j < col+2; j++){
            if((i > 0 and i < row+1) and (j > 0 and j < col+1) )
                arr[i][j].Value = value; 
        }   
    }
    
    for(int i = 1; i < row+1; i++){
        for(int j = 1; j < col+1; j++){
            arr[i][j].North        = &arr[i][j]; 
            arr[i][j].North_East   = &arr[i][j];      
            arr[i][j].East         = &arr[i][j];
            arr[i][j].South_East   = &arr[i][j];      
            arr[i][j].South        = &arr[i][j]; 
            arr[i][j].South_West   = &arr[i][j];      
            arr[i][j].West         = &arr[i][j];
            arr[i][j].North_West   = &arr[i][j];      
        }
    }

    this->row = row;
    this->col = col;
    this->act_row = row+2;
    this->act_col = col+2;
}

Map::~Map(){
    for(int i = 0; i < row ; i++)
            delete[] arr[i] ;
    delete[] arr ;
    arr = nullptr; 
}

void Map::displayMap(){
    for(int i = 0; i < row; i++){
        cout << "[";
        for(int j = 0; j < col; j++)
            cout <<" "<< arr[i][j].Value << " ";
        cout << "]"<< endl;
    }
}

void Map::actualMap(){
    for(int i = 0; i < row+2; i++){
        cout << "[";
        for(int j = 0; j < col+2; j++)
            cout <<" "<< arr[i][j].Value << " ";
        cout << "]"<< endl;
    }
}

void Map::connections(){
    for(int i = 0; i < act_row; i++){
        for(int j = 0; j < act_col; j++){
            cout << arr[i][j];
        }
    }
}
ostream& operator<<(ostream& os, const Map& map);