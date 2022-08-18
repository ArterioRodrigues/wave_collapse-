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
        map.MapState();
    }
    

    // system("clear");
    // map.WaveCollapse();
    map.displayMap();
    // map.MapState();

    // map.WaveCollapse();
    // map.actualMap();
    // map.MapState();
    //map.displayMap();
    //map.connections();
    return 0;
}