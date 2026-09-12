// cout and cin

#include <iostream>

using namespace std;

int main(){
    string name;

    cout << "what is your name?" << endl;
    getline(cin, name);

    cout << "now i know our name is " << name << endl;
    
    return 0;
}