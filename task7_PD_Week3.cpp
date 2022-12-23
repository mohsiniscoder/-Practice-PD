#include<iostream>
using namespace std;
main() 
{
string name;
float adult_ticket;
float child_ticket;
float no_adult_ticket;
float no_child_ticket;
float amount;
float percentage;
cout<<"Enter Movie Name";
cin>>name;
cout<<"Movie Name"<<name;
cout<<"Enter Adult Ticket Price ";
cin>>adult_ticket;
cout<<"Enter child Ticket Price ";
cin>>child_ticket;
cout<<"Enter No. of Adult Tickets Sold ";
cin>>no_adult_ticket;
cout<<"Enter No. of Child Tickets Sold ";
cin>>no_child_ticket;
amount = (adult_ticket*no_adult_ticket)+(child_ticket*no_child_ticket);
cout<<"Enter Percentage to Donation=";
cin>>percentage;
float final_mon = amount - (amount*(percentage/100)); 
cout<<"Final Money After Your Donation is = "<<final_mon; 

}