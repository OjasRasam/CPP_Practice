#include <iostream>
#include <vector>
using namespace std;

int main(){
    // for(int i {1} ; i <= 10 ; i = i+2){
    //     cout << i << endl;
    // }

    // for(int i {10} ; i > 0 ; i--){
    //     cout << i << endl;
    // }

    // for(int i{0}, j{10}; i <= 10; i++,j++){
    //     cout << i << " + " << j << " = " << i+j << endl;
    // }

    // for(int i{1}; i <= 100; i++){
    //     cout << i;
    //     if(i%10 == 0){
    //         cout << endl;
    //     }else{
    //         if(i<10){
    //             cout << "  ";
    //         }else{
    //             cout << " ";
    //         }
            
    //     }
    // }

    vector <int> nums {10,20,30,40,50};
    for(unsigned i {0} ; i < nums.size() ; i++){
        cout << nums[i] << endl;
    }

    return 0;
}