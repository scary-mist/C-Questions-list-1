//
//  main.cpp
//  Function{ Random no. Example}
//
//  Created by Amartya Vibhu on 13/03/22.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int random_number{};
    size_t count{10};
    int min{1};
    int max{6};
    cout<<"RAND_MAX on my system is: "<<RAND_MAX<<endl;
    srand(time(nullptr));
    for(size_t i{1}; i<=count; ++i)
    {
        random_number = rand()%max + min;
        cout<<random_number<<endl;
    }
    cout<<endl;
    return 0;
}
