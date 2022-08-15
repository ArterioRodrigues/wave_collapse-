#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;
class Node {
    public:
        Node* North;
        Node* North_East;
        Node* East;
        Node* South_East;
        Node* South;
        Node* South_West;
        Node* West;
        Node* North_West;

        int Value;    
        friend ostream& operator<<(ostream& os, const Node& node);        
};




#endif