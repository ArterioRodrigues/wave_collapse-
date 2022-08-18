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
    int next;
    for(int i = 0; i < 10; i++)
    {
        system("clear");

        map.WaveCollapse();
        map.displayMap();
        cin >> next;
    }
    

    // system("clear");
    // map.WaveCollapse();
    // map.actualMap();
    // map.MapState();

    // map.WaveCollapse();
    // map.actualMap();
    // map.MapState();
    //map.displayMap();
    //map.connections();
    return 0;
}