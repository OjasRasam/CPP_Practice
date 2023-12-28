// #include <iostream>

// using namespace std;

// int main () {
//     char selection {};
//     do{
//         cout << "1. Do this" <<endl ;
//         cout << "2. Do that" <<endl ;
//         cout << "3. Do something else" << endl;
//         cout << "Q. Quit" << endl;
//         cout << "Select an option : ";
//         cin >> selection;
//         switch (selection){
//             case '1':
//                 cout << "Doing this " << endl;
//                 break;
//             case '2':
//                 cout << "Doing that " << endl;
//                 break;
//             case '3':
//                 cout << "Doing something else" << endl;
//                 break;
//             case 'q':
//                 cout << "Okay Quitting" << endl;
//                 break;
//             case 'Q':
//                 cout << "Okay Quitting" << endl;
//                 break;
//             default:
//                 cout << "Enter a valid selection";
//                 break; 
//         }
//     }while(selection != 'q' || selection != 'Q');

//     cout << "Thanks for using our menu !" << endl;

//     return 0;
// }

#include <iostream>

using namespace std;

int main() {
    char selection{};
    do {
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;
        cout << "Select an option : ";
        cin >> selection;
        switch (selection) {
            case '1':
                cout << "Doing this " << endl;
                break;
            case '2':
                cout << "Doing that " << endl;
                break;
            case '3':
                cout << "Doing something else" << endl;
                break;
            case 'q':
            case 'Q':
                cout << "Okay Quitting" << endl;
                break;
            default:
                cout << "Enter a valid selection" << endl;
                break;
        }
    } while (selection != 'q' && selection != 'Q');

    cout << "Thanks for using our menu !" << endl;

    return 0;
}
