//Multiplication Table using nested loop
//  main.cpp
//  Nested loop
//
//  Created by Amartya Vibhu on 09/03/22.
//

#include <iostream>
#include<vector>

using namespace std;

int main()
{
   
    for(int num1{1}; num1<=10; ++num1){
       for(int num2{1}; num2<=10; ++num2){
           cout<<num1<<" * "<<num2<<" =  "<<num1*num2<<endl;
       }
       cout<<"-------------------------------"<<endl;
      
       
   }
    /*
//    Showing 2-D vector:
    vector<vector<int>>vector_2d{
        {1,2,3},{10,20,30,40},{100,200,300,400,500}
    };
    for(auto vec: vector_2d){
        for(auto val: vec){
            cout<<val<<" ";
        }
        cout<<endl;
    }
     */
   return 0;
}
