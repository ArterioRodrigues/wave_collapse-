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

    while(!map.collapsed())
    {
        map.WaveCollapse();
        cout << endl << endl;
        map.MapState();
        
    }
    cout << endl << endl;
    map.displayMap();
    return 0;
}


// void test(){
//     bool check = false;
//     for(int k= 0; k < 8; k++){
//         if(master->sur_Node[k]->value != 0){
//             master_state = adam_state[master->value];
//             state = master->sur_Node[k]->getState();

//             for(auto i : state){
//                 for(auto j : master_state){
//                     if(i == j){
//                         check = true;
//                         break;
//                     }
//                 }
//                 if(!check)
//                     state.erase(state.begin()+i);
                
//                 check = false;
//             }
//             master->sur_Node[k]->setState(state);
//         }
//     }
// }