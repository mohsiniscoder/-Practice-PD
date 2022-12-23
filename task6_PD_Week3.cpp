#include<iostream>
using namespace std;
main() 
{
float weight_of_bag,cost_of_bag,area;
cout<<"Enter Bag Size in Pounds=";
cin>>weight_of_bag;
cout<<"Enter the cost of Bag=";
cin>>cost_of_bag;
cout<<"Area covered by Bag in Square Feet=";
cin>>area;
float cost_of_pound = cost_of_bag / weight_of_bag;
float cost_of_area = cost_of_bag / area ;
cout<<"cost of fertilizing per pound ="<<cost_of_pound<<endl;
cout<<"cost of fertilizing the area per square feet is="<<cost_of_area;
}