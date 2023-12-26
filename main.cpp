// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int inputValue {0};
    cout << "Enter value in cents : ";
    cin >> inputValue ;
    cout << "Entered value is : " << inputValue << " Cents" << endl;
    int dollorCount {0};
    int quarterCount {0};
    int dimeCount {0};
    int nickelCount {0};
    int pennyCount {0};
    while(inputValue-100 >= 0){
        dollorCount += 1;
        inputValue -= 100;
    }
    
    while (inputValue-25 >=0){
        quarterCount += 1;
        inputValue -= 25;
    }
    
    while (inputValue - 10 >= 0){
        dimeCount += 1;
        inputValue -= 10;
    }
    
    while (inputValue - 5 >= 0){
        nickelCount += 1;
        inputValue -= 5;
    }
    
    while (inputValue - 1 >= 0){
        pennyCount +=1;
        inputValue -= 1;
    }
    
    cout << "Dollor count : " << dollorCount << endl;
    cout << "Quarter count : " << quarterCount << endl;
    cout << "Dime count : " << dimeCount << endl;
    cout << "nickel count : " << nickelCount << endl;
    cout << "penny count : " << pennyCount << endl;
    return 0;
}