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
    
    Map map(10,10);
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
    map.displayMap();
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