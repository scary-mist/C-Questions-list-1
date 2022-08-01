//
//  main.cpp
//  Function {pass by reference-vector example}
//
//  Created by Amartya Vibhu on 22/03/22.
//
//
//  main.cpp
//  Function Parameter{Pass by value} (Imp.)
//
//  Created by Amartya Vibhu on 18/03/22.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void pass_by_value1(int &num);
void pass_by_value2(string &s);
void pass_by_value3(vector<string> &v);
void print_vector(vector<string> &v);

void pass_by_value1(int &num){
    num = 1000;
}
void pass_by_value2(string &s){
    s = "Changed";
}
int main() {
    int num{10};
    int another_num{20};
    cout<<"num before calling paas_by_ref1: "<<num<<endl;
    pass_by_value1(num);
    cout<<"num after calling paas_by_ref1: "<<num<<endl;
    
    cout<<"\nanother_num before calling paas_by_ref1: "<<another_num<<endl;
    pass_by_value1(another_num);
    cout<<"another_num after calling paas_by_ref1: "<<another_num<<endl;
    
    string name{"Frank"};
    cout<<"\nstring before calling pass_by_ref2: "<<name<<endl;
    pass_by_value2(name);
    cout<<"string after calling pass_by_ref2: "<<name<<endl;
    
    return 0;
    
}

