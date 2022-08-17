#include <iostream>
#include "../Node/Node.hpp"
using namespace std;

int main(){

    Node** arr = new Node*[10];
    int count = 0;
    for(int i = 0; i < 10 ; i++){

        arr[i] = new Node[10];
        for(int j = 0; j < 10; j++){
            arr[i][j].Value = count++;
            cout << arr[i][j];
        }
    
    }
    return 0;
}