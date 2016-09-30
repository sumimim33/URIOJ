#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, hour;
    float hour_value;
    cin>>num>>hour>>hour_value;
    std::cout << std::setprecision(2) << std::fixed;
    cout << "NUMBER = " <<num<<"\n"<<"SALARY = U$ "<<hour*hour_value<<endl;
    return 0;
}
