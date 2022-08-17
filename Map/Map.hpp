#ifndef MAP_H
#define MAP_H

#include "../Node/Node.hpp"
#include <iostream>
using namespace std;

class Map{
    public:
        Map(int row, int col, int value = 3);
        ~Map();


        //Will make return memory address to wave collapse part
        void WaveCollapse();
        
        void displayMap();
        void actualMap();
        void connections();

        friend std::ostream& operator<<(std::ostream& os, const Map& map);   

        int value; 
    private:
        Node** arr;
        int row;
        int col;
        int act_row;                
        int act_col; 
};


#endif