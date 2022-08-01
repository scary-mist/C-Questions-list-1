//
//  main.cpp
//  Function Overloading
//
//  Created by Amartya Vibhu on 21/03/22.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;
void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num) {
    cout<<"Printing int "<<num<<endl;
}
void print(double num){
    cout<<"Printing double "<<num<<endl;
}
void print(string s){
    cout<<"Printing string "<<s<<endl;
}
void print(string s,string t){
    cout<<"Printing two string "<<s<<" and "<<t<<endl;
}
void print(vector<string> v){
    cout<<"Printing vectors of strings : ";
    for(auto s: v)
        cout<<s + " ";
    cout<<endl;
}


int main() {
    print(100);
    print('A'); // Integer is always prompted to int should print 65 ASCII code for 'A'.
    print(123.5);  //printing double
    print(123.5F); // Float is promoted to double
    print("C-style string "); // C style string is converted to C++ string
    string s{"C++ string"};
    print(s);         //C++ string
    print("C-style string", s);  // First argument is converted to C++ string.
    vector<string> three_friends{"vibhu", "deepak", "prince"};
    print(three_friends);
    
    return 0;
}
