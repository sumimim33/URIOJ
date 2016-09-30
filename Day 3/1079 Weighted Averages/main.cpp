#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{

    ll n;
    cin>>n;
    double x,y,z;
    std::cout<<std::setprecision(1)<<std::fixed;
    while(n--)
    {
        cin>>x>>y>>z;
        cout<<(x*2+y*3+z*5)/10.0<<endl;
    }
    return 0;
}
