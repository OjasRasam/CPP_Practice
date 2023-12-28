#include <iostream>
using namespace std;

int main(){
    // int num {};
    // cout << "Enter a number : ";
    // cin >> num;
    // while(num > 0){
    //     cout << num << endl;
    //     num --;
    // }
    // cout << "Allah hu akbar BOOOOMMMMM"<<endl;

    // int num {};
    // cout << "Enter an integer less than 100 : ";
    // cin >> num;
    // while(num >= 100){
    //     cout << "Input too high - Enter an integer less than 100 : ";
    //     cin >> num;
    // }
    // cout << "Fucking thank you bitch !!!";




    // ASK USER TO INPUT NUMBER BETWEEN 1 AND 5
    // USE WHILE LOOP TO KEEP ASKING USER FOR NUMBER BETWEEN 1 AND 5
    // WHEN NUMBER CORRECT NUMBER IS ENTERED EXIT LOOOP AND SAY THANK YOU

    bool done {false};
    int num {0};
    while(!done){
        cout << "Enter a number between 1 and 5: ";
        cin >> num;
        if(num <=1 or num >=5){
            cout << "Wrong choice! Please enter number between 1 and 5 : ";
            cin >> num;
        }else{
            cout << "Thank YOU!";
            done = true;
        }
    }






















    return 0;
}