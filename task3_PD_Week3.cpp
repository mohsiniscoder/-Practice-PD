#include<iostream>
using namespace std;
main() 
{
float accel,time,intial;
cout<<"Enter Acceleration=";
cin>>accel;
cout<<"Enter Time=";
cin>>time;
cout<<"Enter intial Velocity=";
cin>>intial;
float final_velocity = intial + (accel*time); //First Equation of Motion
cout<<"Final Velocity="<<final_velocity<<"m/s";
}