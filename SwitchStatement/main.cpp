#include <iostream>
using namespace std;

int main(){
    char grade {};
    cout << "Enter grade letter you expect: ";
    cin >> grade;
    switch (grade){
        case 'a':
        case 'A':
            cout << "You need 90 + for grade A, Study really hard" << endl;
            break;
        case 'b':
        case 'B':
            cout << "You need 80+ for grade B, Study hard" << endl;
            break;
        case 'c':
        case 'C':
            cout << "You need 70+ for grade C, Study" << endl;
            break;
        case 'd':
        case 'D':
        case 'e':
        case 'E':
            cout << "You should probably try for better grade than D or E " << endl;
            break;
        case 'f':
        case 'F':
            cout << "Fuck you" << endl;
            break;
        default:
            cout << "Dont you fucking know what is meant by a grade???";
            break;
    }
    return 0;
}