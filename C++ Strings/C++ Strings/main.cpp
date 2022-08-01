//
//  main.cpp
//  C++ Strings
//
//  Created by Amartya Vibhu on 11/03/22.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s0;
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{"Kiwi"};
    string s4{"apple"};
    string s5{s1};
    string s6{s1,0,3};
    string s7(10,'X');
    
    cout<<s0<<endl; // No garbage
    cout<<s0.length()<<endl;  //enpty string
    
//    Initialization
    cout<<"----------------"<<"Initialization"<<"-----------------"<<endl;
    cout<<"s1 is initalized to : "<<s1<<endl;
    cout<<"s2 is initalized to : "<<s2<<endl;
    cout<<"s3 is initalized to : "<<s3<<endl;
    cout<<"s4 is initalized to : "<<s4<<endl;
    cout<<"s5 is initalized to : "<<s5<<endl;
    cout<<"s6 is initalized to : "<<s6<<endl;
    cout<<"s7 is initalized to : "<<s7<<endl;
//    Comparision
    cout<<"----------------"<<"Comparision"<<"-----------------"<<endl;
    cout<<boolalpha;
    cout<<s1<<" = "<<s5<<": "<<(s1 == s5)<<endl;
    cout<<s1<<" = "<<s2<<": "<<(s1 == s2)<<endl;
    cout<<s1<<" != "<<s2<<": "<<(s1 != s5)<<endl;
    cout<<s1<<" < "<<s2<<": "<<(s1 < s2)<<endl;
    cout<<s2<<" > "<<s1<<": "<<(s2 > s1)<<endl;
    cout<<s4<<" < "<<s5<<": "<<(s1 < s5)<<endl;
    cout<<s1<<" = "<<"Apple"<<": "<<(s1 == "Apple")<<endl;
    
//    Assignment
    cout<<"----------------"<<"Assignment"<<"-----------------"<<endl;
    s1="Watermelon";
    cout<<"s1 is now : "<<s1<<endl;
    s2=s1;
    cout<<"s2 is now : "<<s2<<endl;
    s3="Frank";
    cout<<"s3 is now : "<<s3<<endl;
    s3[0]= 'C';
    cout<<"s3 changed the first letter to 'C': "<<s3<<endl;
    s3.at(0) = 'P';
    cout<<"s3 changed the first letter to 'P': "<<s3<<endl;
    
//    Concatenation
    cout<<"----------------"<<"Concatenation"<<"-----------------"<<endl;
    s3 = "Watermelon";
    s3 = s5 + " and " + s2 +" juice " ;
    cout<<"s3 is now: "<<s3<<endl;

//    s3 = "nice" + " cold " + s5 +" juice " ; // compiler error
    
//    Looping
    cout<<"----------------"<<"Looping"<<"-----------------"<<endl;
    s1 = "Apple";

//    for(size_t i{0}; i<s1.length();i++)      //    using for loop
//        cout<<s1.at(i)<<endl;
//    cout<<endl;

    for(auto c: s1)            //    Using range based for loop
        cout<<c<<endl;
    
//    Substring
    cout<<"----------------"<<"Substring"<<"-----------------"<<endl;
    s1 = "This is a test";
    cout<<s1.substr(0,4)<<endl;
    cout<<s1.substr(5,2)<<endl;
    cout<<s1.substr(10,4)<<endl;
    
    
    return 0;
}
