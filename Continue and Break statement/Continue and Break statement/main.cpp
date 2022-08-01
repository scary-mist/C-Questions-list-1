//
//  main.cpp
//  Continue and Break statement
//
//  Created by Amartya Vibhu on 09/03/22.
//

#include <iostream>
#include<vector>

using namespace std;
int main(){
    
    /*
    vector<int>values {1,2,-1,3,-1,-99,7,8,10};
    for(auto val : values)
        if(val == -99)
            break;
           else if(val == -1)
               continue;
    else
        cout<<val<<endl;
     */
    int i{};
    cout<<"The output with break statement is: ";
    
    for(i = 1; i <= 5; ++i){
        if((i%3) == 0)
            break;
            cout<<i<<" ";
    }
    cout<<"\n The output wit continue statement is: "<<endl;
    for(i = 1; i <= 5; ++i){
        if((i%3) == 0)
            continue;
        cout<<i<<" ";
    }
    
    return 0;
}
