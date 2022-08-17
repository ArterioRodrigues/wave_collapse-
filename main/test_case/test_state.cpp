#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <vector>
using namespace std;

string operator*(const string& s, unsigned int n) {
    stringstream out;
    while (n--)
        out << s;
    return out.str();
}

int main(){
    map<int , vector<int> > state;
    map<int , vector<int> >::iterator itr;


    int key = 0;
    string rules = "";

    char answer = 'n';
    vector<int> values;

    do{
        cout << "Enter a key and it rules !!!" << endl;
        
        cout << "Enter a key: ";
        cin >> key;

        cout << "Enter the rules: ";
        getline(cin >> ws, rules);
        
        for(int i = 0 ; i < rules.length(); i++){
            if(isdigit(rules[i]))
                values.push_back(int(rules[i]) - int('0'));

        }
        state.insert(pair<int , vector<int> >(key, values));
        key = 0;
        values.clear();
        cout << "Would you like to enter more rules and keys y/n";
        cin >> answer;

    }  
    while(answer == 'y');
    

     for (itr = state.begin(); itr != state.end(); ++itr) {
        cout << '\t' << itr->first << '\t'<<  "{ ";
            for(int i = 0; i < itr->second.size(); i++)
                cout << itr->second[i] << " ";

        cout << "}" << endl;
    }

    
    return 0;
}