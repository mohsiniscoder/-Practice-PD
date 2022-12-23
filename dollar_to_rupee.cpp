#include <iostream>
using namespace std;
main()
{
    float rupee = 226.25;
    float convert;
    int dollar;
    cout << "Enter Dollars=";
    cin >> dollar;
    convert = dollar * rupee;
    cout << "Money in Rupees is " << convert;
}