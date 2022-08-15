#include <iostream>
#include "../Node/Node.hpp"
using namespace std;

int main(){

    Node* a1 = new Node;
    Node* a2 = new Node;
    Node* a3 = new Node;
    Node* a4 = new Node;
    Node* a5 = new Node;
    Node* a6 = new Node;
    Node* a7 = new Node;
    Node* a8 = new Node;

    a1->Value = 1;
    a2->Value = 2;
    a3->Value = 3;
    a4->Value = 4;
    a5->Value = 5;
    a6->Value = 6;
    a7->Value = 7;
    a8->Value = 8;


    Node* master = new Node;

    master->North = a1;
    master->North_East = a2;
    master->East = a3;
    master->South_East = a4;
    master->South = a5;
    master->South_West = a6;
    master->West = a7;
    master->North_West = a8;
    master->Value = 9;

    cout << *master;

    Node* arr[10];
    
    for(int i = 0; i < 10; i++){
        arr[i] = new Node[10];
        cout << *arr[i] << endl;
    }

    return 0;
}