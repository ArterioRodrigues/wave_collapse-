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

    value = 0;

    static int _id = 0;  
    id = _id++;
}

void Node::setSurrondingNodes(){
    sur_Node = new Node *[8];
    
    sur_Node[0] = North; 
    sur_Node[1] = North_East; 
    sur_Node[2] = East; 
    sur_Node[3] = South_East; 
    sur_Node[4] = South; 
    sur_Node[5] = South_West; 
    sur_Node[6] = West; 
    sur_Node[7] = North_West;
}

void Node::setDefaultState(int value){
   if(value > 0){
        stateSize = value;
        for(int i = 0; i < value; i++)
            state.push_back(i+1);
    } 
}

void Node::setState(vector<int> value){
    
    state.clear();
    stateSize = value.size();
    for(int i = 0; i < value.size(); i++)
        state.push_back(value[i]);
    
}

void Node::displayState(){
    cout << "{ ";
    for(int i = 0; i < stateSize; i++)
        cout << state[i] << " ";
    cout << "}";
}

vector<int> Node::getState(){
    return state;
}

int Node::getStateSize(){
    return stateSize;
}

ostream& operator<<(ostream& os, const Node& node){

    os << endl << endl;
    os << "Value         : " << node.value       << "   "  << "Node id  : " << node.id << endl;

    os << "North         : " << node.North       << "   " << "Value  : ";
    if(node.North != nullptr)
        os << node.North->value      << "   " << "id : " << node.North->id       << endl ;
    else
        os << "NULL" << endl;
    os << "North_East    : " << node.North_East  << "   " << "Value  : ";
    if(node.North != nullptr)
        os << node.North_East->value << "   " << "id : " << node.North_East->id  << endl ;
    else
        os << "NULL" << endl;
    os << "East          : " << node.East        << "   " << "Value  : ";
    if(node.North != nullptr)
        os << node.East->value       << "   " << "id : " << node.East->id        << endl ;
    else
        os << "NULL" << endl; 
    os << "South_East    : " << node.South_East  << "   " << "Value  : ";
    if(node.North != nullptr)
        os << node.South_East->value << "   " << "id : " << node.South_East->id  << endl ;
    else
        os << "NULL" << endl; 
    os << "South         : " << node.South       << "   " << "Value  : ";
    if(node.North != nullptr)
        os << node.South->value      << "   " << "id : " << node.South->id       << endl ;
    else
        os << "NULL" << endl;
    os << "South_West    : " << node.South_West  << "   " << "Value  : ";
    if(node.North != nullptr)
        os << node.South_West->value << "   " << "id : " << node.South_West->id  << endl ;
    else
        os << "NULL" << endl;
    os << "West          : " << node.West        << "   " << "Value  : ";
    if(node.North != nullptr)
        os << node.West->value       << "   " << "id : " << node.West->id        << endl ;
    else
        os << "NULL" << endl;
    os << "North_West    : " << node.North_West  << "   " << "Value  : ";
    if(node.North != nullptr)
        os << node.North_West->value << "   " << "id : " << node.North_West->id  << endl ;
    else
        os << "NULL" << endl;


        
    return os;
}