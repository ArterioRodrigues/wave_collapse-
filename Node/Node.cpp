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
    static int _id = 0;  
    id = _id++;
}
ostream& operator<<(ostream& os, const Node& node){

    os << endl << endl;
    os << "Value:        " << node.Value << "Node id:     " << node.id <<  << endl;

    os << "North :       " << node.North      ;
    if(node.North != nullptr)    
        os <<  "   North Value :       "  << node.North->Value << endl ;
    else
        os << "  North Value:     NULL" << endl;

        
    os << "North_East :  " << node.North_East ;
    if(node.North_East != nullptr)    
        os <<  "   North_East Value :  "  << node.North_East->Value << endl ;
    else
        os << "  North_East Value: NULL" << endl;

        
    os << "East :        " << node.East       ;
    if(node.East != nullptr)    
        os <<  "   East Value :        "  << node.East->Value << endl ;
    else
        os << "  East Value:      NULL" << endl;

        
    os << "South_East :  " << node.South_East ;
    if(node.South_East != nullptr)    
        os <<  "   South_East Value :  "  << node.South_East->Value << endl ;
    else
        os << "  South_East Value : NULL" << endl;

        
    os << "South :       " << node.South      ;
    if(node.South != nullptr)    
        os <<  "   South Value :       "  << node.South->Value << endl ;
    else
        os << "  South Value :      NULL" << endl;

        
    os << "South_West :  " << node.South_West ;
    if(node.South_West != nullptr)    
        os <<  "   South_West Value :  "  << node.South_West->Value << endl ;
    else
        os << "  South_West Value :  NULL" << endl;

        
    os << "West :        " << node.West       ;
    if(node.West != nullptr)    
        os <<  "   West Value :        "  << node.West->Value << endl ;
    else
        os << "  West Value :        NULL" << endl;

        
    os << "North_West :  " << node.North_West ;
    if(node.North_West != nullptr)    
        os <<  "   North_West Value :  "  << node.North_West->Value << endl ;
    else
        os << "  North_West Value :   NULL" << endl;

        
    return os;
}