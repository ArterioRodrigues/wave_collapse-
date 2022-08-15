#include "../Node/Node.hpp"

class Map{
    public:
        Map(double row, double col);
        friend ostream& operator<<(ostream& os, const Map& map);    
    private:

        double row;
        double col;
}