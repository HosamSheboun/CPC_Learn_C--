#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "How much sasa has money? ";
    int money;
    cin >> money;
    cout << "Sasa has " << money << " LE. So:" << endl;
    
    if (money >= 20)
    {
        cout << "He Can ride the toktok to the university." << endl;
    }
    else if (money >= 10)
    {
        cout << "He can take a bus to the university." << endl;
    }
    else
    {
        cout << "He must walk to university." << endl;
    }

    return 0;
}
