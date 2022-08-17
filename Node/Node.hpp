
#include <iostream>
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
        
        void setDefaultState(int value);
        void setState(int value[] , int size);
        void displayState();
        int* getState();
        int  getStateSize();

        int id;    
        int value;    

        friend std::ostream&  operator<<(std::ostream& os, const Node& node);    

    private:
        int* state; 
        int  stateSize;
            
};




#endif