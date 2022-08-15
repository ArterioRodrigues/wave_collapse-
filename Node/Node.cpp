#include "Node.hpp"

ostream& operator<<(ostream& os, const Node& node){

    os << endl;
    os << "Value:        " << node.Value << endl;
    os << "North :       " << node.North          << "   North Value :       "   << node.North->Value    << endl ;
    os << "North_East :  " << node.North_East     << "   North_East Value :  "   << node.North_East->Value    << endl ;
    os << "East :        " << node.East           << "   East Value :        "   << node.East->Value    << endl ;
    os << "South_East :  " << node.South_East     << "   South_East Value :  "   << node.South_East->Value    << endl ;
    os << "South :       " << node.South          << "   South Value :       "   << node.South->Value    << endl ;
    os << "South_West :  " << node.South_West     << "   South_West Value :  "   << node.South_West->Value    << endl ;
    os << "West :        " << node.West           << "   West Value :        "   << node.West->Value    << endl ;
    os << "North_West :  " << node.North_West     << "   North_West Value :  "   << node.North_West->Value    << endl ;
    return os;
}