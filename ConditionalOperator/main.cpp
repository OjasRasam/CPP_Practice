#include <iostream>
using namespace std;

int main(){
    // int number{};
    // cout << "Enter a number : ";
    // cin >> number;

    // bool isEven = number % 2 == 0 ? 1 : 0;

    // cout << ((isEven == 1) ? "Even" : "Odd");

    int num1{},num2{};
    cout << "Enter 2 numbers : ";
    cin >> num1 >> num2;

    if (num1 != num2){
        cout << "Bigger " << ((num1>num2)? num1 : num2);
        cout << "Smallest " << ((num1<num2) ? num1 : num2);
    }else{
        cout << num1 << " IS EQUAL TO " << num2;
    }

    
    return 0;
}