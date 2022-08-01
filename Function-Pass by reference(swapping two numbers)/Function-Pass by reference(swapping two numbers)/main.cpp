//
//  main.cpp
//  Function-Pass by reference(swapping two numbers)
//
//  Created by Amartya Vibhu on 22/03/22.
//

#include <iostream>

using namespace std;
void swap(int &a, int &b);

int main() {
    int x{10}, y{20};
    cout<<x<<" "<<y<<endl;
    swap(x, y);
    cout<<x<<" "<<y<<endl;
    return 0;
}
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
