//
//  main.cpp
//  Function{Passing Arrays to Function}
//
//  Created by Amartya Vibhu on 21/03/22.
//

#include <iostream>

using namespace std;

void print_array(int arr[], size_t size);
void set_arr(int arr[], size_t size, int value);

void print_array(int arr[], size_t size){
    for(size_t i{0}; i < size; ++i)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void set_arr(int arr[], size_t size, int value){
    for(size_t i{0}; i < size; ++i)
        arr[i] = value;
      
    
}


int main() {
    int my_score[] {100, 98, 90, 86, 84};
    print_array(my_score,5);
    set_arr(my_score,5,100);
    print_array(my_score,5);
    
    
}
