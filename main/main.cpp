#include <iostream>
#include <string>
#include <sstream>
#include "../Map/Map.hpp"
#include "../Node/Node.hpp"
using namespace std;

string operator*(const string& s, unsigned int n) {
    stringstream out;
    while (n--)
        out << s;
    return out.str();
}

int main(){
    
    Map map(16,16);
    map.test();
    //while(!map.collapsed())
    //{
        // map.WaveCollapse();
        // cout << endl << endl;
        // map.MapState();

        // map.WaveCollapse();
        // cout << endl << endl;
        // map.MapState();

        // map.WaveCollapse();
        // cout << endl << endl;
        // map.MapState();

        // map.WaveCollapse();
        // cout << endl << endl;
        // map.MapState();
        
    //}
    // cout << endl << endl;
    //map.displayMap();
    return 0;
}


// void test(){
//     bool check = false;
//     vector<int> master_state;
//     vector<int> copy_state;
//     for(int k= 0; k < 8; k++){
        
//         if(master->sur_Node[k]->value != 0 and master->sur_Node[k]->getStateSize() != 1){
//             master_state = adam_state[master->value];
//             state = master->sur_Node[k]->getState();
        
//             for(int i = 0; i < state.size(); i++){
//                 for(int j = 0; j < master_state.size(); j++){
//                     if(state[i] == master_state[j]){
//                         check = true;
//                         break;
//                     }
//                 }
//                 if(check)
//                     copy_state.push_back(state[i]);         
//                 check = false;
//             }
            
//             master->sur_Node[k]->setState(copy_state);
//             copy_state.clear();
//         }
//     }
// }

// void Map::test(){
//     int posx = 8;
//     int posy = 4;

//     Node* node = &arr[8][4];
//     bool border = false;
   
//     for(int i = 2; i <= 8; i =i + 2){
//         if(node->value != 0){
//             for(int j = 0; j < 8; j= j+2){
//                 for(int k = 0; k < i ; k++){
//                     node = node->sur_Node[j];  
//                     node->value  = 1;    
//                 }   

//             } 
//         }
//         else
//         {
//             border = true;
//             break;
//         }
//         posx++;
//         posy--;
//         node = &arr[posx][posy];
//     }
//     actualMap();
     

//     if(border){
//         for(int i = 8; i <= 8; i =i + 2){
//             for(int j = 0; j < 8; j= j+2){
//                 for(int k = 0; k < i ; k++){
//                     node = node->sur_Node[j];  
//                     node->value  = 1;    
//                 } 
//             } 
//         } 
//         posy--;
//         node = &arr[posx][posy];
//     }
// }
