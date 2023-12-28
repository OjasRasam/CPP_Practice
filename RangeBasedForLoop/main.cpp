#include <iostream>
#include <vector>

using namespace std;

int main(){

    // int scores[]{10,20,30};

    // for (int score : scores){
    //     cout << score << endl;
    // }

    vector <double> temperatures {87.9,77.9,80.0,72.5};

        double runningSum{};

        for(auto temperature : temperatures){
            runningSum += temperature;
        }

        double average = runningSum / temperatures.size();

        cout << "Average temperature : " << average;

    return 0;
}