//
//  main.cpp
//  Function Default Argument Values
//
//  Created by Amartya Vibhu on 21/03/22.
//

#include<iostream>

using namespace std;

double cal_cost(double base_cost, double tax_rate = 0.06, double shipping_rate = 3.50);
double cal_cost(double base_cost, double tax_rate, double shipping_rate){
    return base_cost += (base_cost*tax_rate) + shipping_rate;
}
int main(){
    double cost{0};
    cost = cal_cost(200, 0.08, 5);  // will use no default
    cout<<"Cost is "<<cost<<endl;   // will use deafault shipping
    cost = cal_cost(200, 0.08);     // will use default shipping and tax rate
    cout<<"Cost is "<<cost<<endl;
    cost = cal_cost(200);
    cout<<"Cost is "<<cost<<endl;
    return 0;
}
