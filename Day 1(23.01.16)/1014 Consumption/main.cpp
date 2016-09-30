#include <bits/stdc++.h>

using namespace std;

int main()
{
    int distance;
    float fuel_unit;
    cin>>distance;
    cin>>fuel_unit;
    std::cout << std::setprecision(3) << std::fixed;
    cout << (distance/fuel_unit)<<" km/l" << endl;
    return 0;
}
