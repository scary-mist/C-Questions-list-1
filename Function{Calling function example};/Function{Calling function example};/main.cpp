//
//  main.cpp
//  Function{Calling function example};
// Defining function for calculating area of circle and cyllinder.
//
//  Created by Amartya Vibhu on 13/03/22.
//

#include <iostream>

using namespace std;

const double pi{3.14159};
double cal_area_circle(double radius){
    return pi * radius * radius;
}



void area_circle(){
    double radius{};
    cout<<"\n Enter the radius of the circle: ";
    cin>>radius;
    cout<<"Area of circle with radius "<<radius<<" is "<<cal_area_circle(radius)<<endl;
}


double cal_area_cyllinder(double radius, double height){
    return pi * radius * radius * height;
}

void area_cyllinder(){
    double radius{};
    double height{};
    cout<<"\n Enter the radius of the cyllinder: ";
    cin>>radius;
    cout<<"\n Enter the height of the cyllinder: ";
    cin>>height;
    cout<<"Area of circle with radius "<<radius<<" and height  "<<height<<" is "<<cal_area_cyllinder(radius,height)<<endl;
}




int main() {
    area_circle();
  area_cyllinder();

    return 0;
}
