#include <iostream>
#include "Map/Map.hpp"
#include <vector>
using namespace std;

int main(){

    vector<int> state = {1,2,3,4,5};

    Map map(50, 50, state);
    map.wave_collapse();
    map.save_map();
  
    return 0;
}