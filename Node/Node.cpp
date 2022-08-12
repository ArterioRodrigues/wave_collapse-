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

Node::Node(Node *North, Node *North_East, Node *East, Node *South_East, Node *South, Node *South_West, Node *West, Node *North_West, int Value){
    this->North = North;
    this->North_East = North_East;
    this->East = East;
    this->South_East = South_East;
    this->South = South;
    this->South_West = South_West;
    this->West = West;
    this->North_West = North_West;

    this->Value = Value;
}

Node Node::getNorth(){
    return *(this->North);
}
Node Node::getNorth_East(){
    return *(this->North_East);
}
Node Node::getEast(){
    return *(this->East);
}
Node Node::getSouth_East(){
    return *(this->South_East);
}
Node Node::getSouth(){
    return *(this->South);
}
Node Node::getSouth_West(){
    return *(this->South_West);
}
Node Node::getWest(){
    return *(this->West);
}
Node Node::getNorth_West(){
    return *(this->North_West);
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