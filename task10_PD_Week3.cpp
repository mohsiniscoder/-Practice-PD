#include <iostream>
using namespace std;
main()
{
    // Since the Given Condition is that we can only use two Variables So ....
    int m, n;
    cout << "Enter first Integer  = ";
    cin >> m;
    n = m;
    cout << "Enter Second Integer = ";
    cin >> m;
    n += m;
    cout << "Enter Third Integer  = ";
    cin >> m;
    n += m;
    cout << "Enter Fourth Integer = ";
    cin >> m;
    n += m;
    cout << "Enter Fifth Integer  = ";
    cin >> m;
    n += m;
    cout << "Your Sum is=" << n;
}
