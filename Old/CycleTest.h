#pragma once
#include <iostream>

using namespace std;

int Cycle()
{
    double prices[5] = { 4.99, 10.99, 6.87, 7.99, 8.49 };

    for (double x : prices)
        cout << x << endl;
    cout << "Test" << endl;
    for (double& x : prices)
    {
        x = x * 0.80; //   20%
        cout << x << endl;
    }
    cout << "Check" << endl;
    for (double x : prices)
        cout << x << endl;
    return 0;
}

