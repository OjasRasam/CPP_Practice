#include <iostream>
using namespace std;

int main() {

    char selection {};

    do{
        cout << "Enter length and width of room with space in between : ";
        int len{},wid{};
        cin >> len >> wid;
        cout << endl << "Area is " << len*wid << endl;
        cout << "Do you want to calculate another area ? Y / N : ";
        cin >> selection; 
    }while(selection == 'y' || selection == 'Y');

    cout << endl << "Thank you for using our Application" << endl;

    return 0;
}