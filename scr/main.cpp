#include <iostream>
#include "Map/Map.hpp"
#include <vector>
using namespace std;

int main(){

    vector<int> state = {1,2,3,4,5};

    Map map(10, 10, state);
    map.wave_collapse();
    map.displayMap();
  
    return 0;
}