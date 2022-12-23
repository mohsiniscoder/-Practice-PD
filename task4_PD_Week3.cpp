#include<iostream>
using namespace std;
main() 
{
string name;
float sub1,sub2,sub3,sub4,sub5;
cout<<"Enter Your Name="<<name;
cin>>name;
cout<<"Enter Your Subject 1 Marks";
cin>>sub1;
cout<<"Enter Your Subject 2 Marks";
cin>>sub2;
cout<<"Enter Your Subject 3 Marks";
cin>>sub3;
cout<<"Enter Your Subject 4 Marks";
cin>>sub4;
cout<<"Enter Your Subject 5 Marks";
cin>>sub5;
float total_marks = sub1 + sub2 + sub3 + sub4 + sub5;
float per = (total_marks/500) * 100 ;
cout<<"Your Percentage is="<<per; 
}