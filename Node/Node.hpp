
#include <iostream>
#include <vector>
using namespace std;

#ifndef NODE_H
#define NODE_H

class Node {
    public:
        Node();
        Node* North;
        Node* North_East;
        Node* East;
        Node* South_East;
        Node* South;
        Node* South_West;
        Node* West;
        Node* North_West;

        Node** sur_Node;
        
        void setSurrondingNodes();
        void setDefaultState(int value);
        void setState(vector<int> value);
        void displayState();
        //void updateState(int value);
        vector<int> getState();
        int  getStateSize();

        int id;    
        int value;    

        friend std::ostream&  operator<<(std::ostream& os, const Node& node);    

    private:
        
        vector<int> state; 
        int  stateSize;
            
};




#endif