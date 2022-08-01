//
//  main.cpp
//  Histogram using nested loop
//
//  Created by Amartya Vibhu on 09/03/22.
//

#include <iostream>
#include<vector>

using namespace std;
int main() {
    int num_items{};
    cout<<"How many data items do you have?"<<endl;
    cin>>num_items;
    
    vector<int>data{};
    for(int i{1}; i<=num_items; i++){
        int data_items{};
        cout<<"Enter the data item "<<i<<" :";
        cin>>data_items;
        data.push_back(data_items);
        
    }
    cout<<"\n Displaying Histogram"<<endl;
    for(auto val: data){
        for(int i{1}; i<= val; i++){
            cout<<"-";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
    
    
    
}
