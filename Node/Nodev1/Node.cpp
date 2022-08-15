#include "Node.hpp"


Node::Node(){
    North = nullptr;
    North_East = nullptr;
    East = nullptr;
    South_East = nullptr;
    South = nullptr;
    South_West = nullptr;
    West = nullptr;
    North_West = nullptr;

    Value = 0;
}

Node::Node(int value){
    North = nullptr;
    North_East = nullptr;
    East = nullptr;
    South_East = nullptr;
    South = nullptr;
    South_West = nullptr;
    West = nullptr;
    North_West = nullptr;

    Value = value;
}

Node::Node(Node &North, Node &North_East, Node &East, Node &South_East, Node &South, Node &South_West, Node &West, Node &North_West, int Value){
    this->North = &North;
    this->North_East = &North_East;
    this->East = &East;
    this->South_East = &South_East;
    this->South = &South;
    this->South_West = &South_West;
    this->West = &West;
    this->North_West = &North_West;

    this->Value = Value;
}

Node Node::getNorth(){
    return this->North;
}
Node Node::getNorth_East(){
    return (this->North_East);
}
Node Node::getEast(){
    return (this->East);
}
Node Node::getSouth_East(){
    return (this->South_East);
}
Node Node::getSouth(){
    return (this->South);
}
Node Node::getSouth_West(){
    return (this->South_West);
}
Node Node::getWest(){
    return (this->West);
}
Node Node::getNorth_West(){
    return (this->North_West);
}
int  Node::getValue(){
    return this->Value;
}

void Node::setNorth(Node North){
    this->North = &North;
};
void Node::setNorth_East(Node North_East){
    this->North_East = &North_East;
};
void Node::setEast(Node East){
    this->East = &East;
};
void Node::setSouth_East(Node South_East){
    this->South_East = &South_East;
};
void Node::setSouth(Node South){
    this->South = &South;
};
void Node::setSouth_West(Node South_West){
    this->South_West = &South_West;
};
void Node::setWest(Node West){
    this->West = &West;
};
void Node::setNorth_West(Node North_West){
    this->North_West = &North_West;
};
void Node::setValue(int value){
    this->Value = Value;
};

ostream& operator<<(ostream& os, const Node& node){

    Node a1 = node.North;
    Node a2 = node.North_East;
    Node a3 = node.East;
    Node a4 = node.South_East;
    Node a5 = node.South;
    Node a6 = node.South_West;
    Node a7 = node.West;
    Node a8 = node.North_West;
    os << endl;
    os << "Value:        " << node.Value << endl;
    os << "North :       " << node.North          << "   North Value :       "   << a1.getValue()    << endl ;
    os << "North_East :  " << node.North_East     << "   North_East Value :  "   << a2.getValue()    << endl ;
    os << "East :        " << node.East           << "   East Value :        "   << a3.getValue()    << endl ;
    os << "South_East :  " << node.South_East     << "   South_East Value :  "   << a4.getValue()    << endl ;
    os << "South :       " << node.South          << "   South Value :       "   << a5.getValue()    << endl ;
    os << "South_West :  " << node.South_West     << "   South_West Value :  "   << a6.getValue()    << endl ;
    os << "West :        " << node.West           << "   West Value :        "   << a7.getValue()    << endl ;
    os << "North_West :  " << node.North_West     << "   North_West Value :  "   << a8.getValue()    << endl ;
    return os;
}