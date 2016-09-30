#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,x,y;
    cin>>a>>b;
    cin>>x>>y;
    std::cout<<std::setprecision(4)<<std::fixed;
    cout << sqrt((a-x)*(a-x)+(b-y)*(b-y)) << endl;
    return 0;
}
