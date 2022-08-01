//
//  Range based for loop.cpp
//  for loop
//
//  Created by Amartya Vibhu on 07/03/22.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> temps{87.2, 23.5, 24.6, 56.3};
    double avg_temp{};
    double run_temp{};
    for(auto temp : temps){
    run_temp +=temp;
        
    }
    avg_temp= run_temp/temps.size();
    cout<<avg_temp;
    return 0;
}
