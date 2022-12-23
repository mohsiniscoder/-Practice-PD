#include<iostream>
using namespace std;
main() 
{

float fruit = 50;
float vegetable = 45;
float kgf,kgv;
float money_of_v;
float money_of_f;
float total_money;
float rupee;
cout<<"Enter The Number of Kilos of Fruits=";
cin>>kgf;
cout<<"Enter The Number of Kilos of Vegetables=";
cin>>kgv;
money_of_v = kgv * vegetable;
money_of_f = kgf * fruit;
total_money = (money_of_v) + ( money_of_f);
rupee = total_money/1.94;
cout<<"Money Earned By this Harvest is "<<rupee<<" Rupees";
}