#ifndef MAP_H
#define MAP_H

#include "../Node/Node.hpp"
#include <map>
#include <vector>
#include <iostream>
using namespace std;

class Map{
    public:
        Map(int row, int col, int value = 3);
        ~Map();

        void setAdamState();    
       
        void handleNode(Node* node);
        //Will make return memory address to wave collapse part
        void WaveCollapse();
        
        void displayMap();
        void actualMap();
        void MapState();
        void connections();

        bool collapsed();
        
        friend std::ostream& operator<<(std::ostream& os, const Map& map);   

        int value; 
    private:
        map<int , vector<int> > adam_state;
        map<int , vector<int> >::iterator itr;
        int num_state;

        Node** arr;
        int row;
        int col;
        int act_row;                
        int act_col; 
};


#endif