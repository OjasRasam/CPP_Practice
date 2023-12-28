# include <iostream>
# include <vector>
using namespace std;

int main(){
    vector <int> numbers {1,2,3,4,5,10,11};
    cout << numbers.at(0) << endl;
    cout << numbers.size();
    int count {0};
    bool found {false};

    if(numbers.empty()){
        return count;
    }else{
        while ( !found )
        {
            while (numbers.at(count) != 99 && count != numbers.size())
            {
                count += 1;
            }

            found = true;
            
        }
        
    }

    cout << "----- " << count;
}