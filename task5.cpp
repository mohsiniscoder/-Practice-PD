#include<iostream>
using namespace std;
main()
{
int matric;
int inter;
int ecat;
cout<<"Matric Marks=";
cin>> matric;
cout<<"Inter Marks=";
cin>>inter;
cout<<"ECAT Marks=";
cin >>ecat;
float matric_per = (matric/1100)*100;
float inter_per = (inter/550)*100;
float ecat_per = (ecat/400) *100;
float aggregate = (ecat_per * 0.50 ) + ( inter_per * 0.40) + ( matric_per * 0.10);
cout<<"You Aggregate is"<<  aggregate;   
}