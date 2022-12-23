#include<iostream>
using namespace std;
main()
{
 int MB;
 float bits;
 cout<<"Enter the amount of MB's=";
 cin >>MB;
 float byte = (MB) * ( 1024 * 1024);
 bits = byte * 8;
 cout<<"The Number of Bits in " <<MB<<" MB are "<<bits;  
 
}