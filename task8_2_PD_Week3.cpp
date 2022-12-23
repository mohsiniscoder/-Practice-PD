#include<iostream>
using namespace std;
main() 
{
int num,num1,num2,num3,num4;
cout<<"Enter a Number =";
cin>>num;
int first = num%10; //Right Most Value is Stored here;
num2 = num/10;
int second = num2%10;
num3 = num2/10;
int third = num3%10;
num4 = num3/10;
int fourth = num4;
int sum = first+second+third+fourth;
cout<<"The Sum is"<<sum;
}