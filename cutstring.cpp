//playing with pointers and strings
//By Baric
#include<iostream>
#include<cstring>

using namespace std;

int main(){

    char name[20]{"monkeying around"};
    char *pointer = name;

///////////over-flowing an array//////////////////////
    char j = {'J'};
    pointer[21] = j;

    char k = {'o'};
    pointer[22] = k;

    char l = {'e'};
    pointer[23] = l;
//////////////////////////////////////////////////////

    cout << endl;
    for (int i = 0; i < 21; i++){
        cout << &pointer[i] << endl;
    }

    cout << endl; 
    cout << "Only print out the last word: ";
    cout << &pointer[10]<< endl;
    cout << endl;
    return 0;
}