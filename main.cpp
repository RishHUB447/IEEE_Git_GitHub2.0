#include <iostream>
#include <string>

using namespace std;

int sum(int a, int b){
    return a +b;
}

int main(){
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello, " << name << "!" << endl;

    for (const char c : name){
        cout << c << " ";
    }

    int j = 0;
    while (j < 100) j++;
    cout << "\nLoop finished, j = " << j << endl;
    return 0;
}