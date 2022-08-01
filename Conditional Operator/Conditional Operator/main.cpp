//
//  main.cpp
//  Conditional Operator
//
//  Created by Amartya Vibhu on 06/03/22.
//

#include <iostream>
using namespace std;

int main() {
    int num{};
    cout<<"Enter an integer: "<<endl;
    cin>>num;
    if(num%2==0)
        cout<<"Integer is even."<<endl;
    else
        cout<<"Integer is odd."<<endl;
    cout<<num<<" is "<<((num%2==0)?"Even":"Odd")<<endl;
    return 0;
    
}
