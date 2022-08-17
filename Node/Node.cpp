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

ostream& operator<<(ostream& os, const Node& node){

    os << endl << endl;
    os << "Value         : " << node.value       << "   "  << "Node id  : " << node.id << endl;

    os << "North         : " << node.North       << "   " << "Value  : " << node.North->value      << "   " << "id : " << node.North->id       << endl ; 
    os << "North_East    : " << node.North_East  << "   " << "Value  : " << node.North_East->value << "   " << "id : " << node.North_East->id  << endl ;
    os << "East          : " << node.East        << "   " << "Value  : " << node.East->value       << "   " << "id : " << node.East->id        << endl ; 
    os << "South_East    : " << node.South_East  << "   " << "Value  : " << node.South_East->value << "   " << "id : " << node.South_East->id  << endl ; 
    os << "South         : " << node.South       << "   " << "Value  : " << node.South->value      << "   " << "id : " << node.South->id       << endl ;
    os << "South_West    : " << node.South_West  << "   " << "Value  : " << node.South_West->value << "   " << "id : " << node.South_West->id  << endl ;
    os << "West          : " << node.West        << "   " << "Value  : " << node.West->value       << "   " << "id : " << node.West->id        << endl ;
    os << "North_West    : " << node.North_West  << "   " << "Value  : " << node.North_West->value << "   " << "id : " << node.North_West->id  << endl ;


        
    return os;
}