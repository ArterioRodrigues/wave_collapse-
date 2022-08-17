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

    Map map(2,2);
    
    map.actualMap();
    
    map.WaveCollapse();
    map.actualMap();

    map.WaveCollapse();
    map.actualMap();

    map.WaveCollapse();
    map.actualMap();

    //map.displayMap();
    //map.connections();
    return 0;
}