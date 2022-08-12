#include <iostream>
#include "../Node/Node.hpp"
using namespace std;

int main(){

    Node a1(1);
    Node a2(2);
    Node a3(3);
    Node a4(4);
    Node a5(5);
    Node a6(6);
    Node a7(7);
    Node a8(8);
    
    Node master(&a2, &a3, &a4, &a5, &a6, &a7, &a8, 0);

    Node a11 = master.getNorth();
    Node a21 = master.getNorth_East();
    Node a31 = master.getEast();
    Node a41 = master.getSouth_East();
    Node a51 = master.getSouth();
    Node a61 = master.getSouth_West();
    Node a71 = master.getWest();
    Node a81 = master.getNorth_West();

    cout << " ma  >>  " << master.getValue() << "  << " <<  endl;
    cout << " a11 >>  " << a11.getValue()  << "  << " <<  endl;
    cout << " a21 >>  " << a21.getValue()  << "  << " <<  endl;
    cout << " a31 >>  " << a31.getValue()  << "  << " <<  endl;
    cout << " a41 >>  " << a41.getValue()  << "  << " <<  endl;
    cout << " a51 >>  " << a51.getValue()  << "  << " <<  endl;
    cout << " a61 >>  " << a61.getValue()  << "  << " <<  endl;
    cout << " a71 >>  " << a71.getValue()  << "  << " <<  endl;
    cout << " a81 >>  " << a81.getValue()  << "  << " <<  endl;
    return 0;
}