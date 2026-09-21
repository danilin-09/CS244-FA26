#include <iostream>
using namespace std;

void missmess(string);
int main(){
    string input;

    do{
        cout << "Enter a word: ";
        cin >> input;

        if(input == "$$$"){
            break;
        }else{
            missmess(input);
            
        }
    }while(input != "$$$");
    cout << "Thank you for using missmess" << endl;
    return 0;
}

void missmess(string w){
    if ( w.front() == 'm' && w.back() == 's' ){
        cout << "missmess" << endl; 
    }else if(w.front() == 'm'){
        cout << "miss" << endl;
    }else if(w.back() == 's'){
        cout << "mess" << endl;
    }else{
        cout << w << endl;
    }
}