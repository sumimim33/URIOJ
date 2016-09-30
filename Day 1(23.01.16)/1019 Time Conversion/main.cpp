#include <iostream>

using namespace std;
typedef long long ll;
int main()
{
    ll n,h,m,s;
    cin>>n;
    h= n/3600;
    n=n%3600;
    m = n/60;
    n=n%60;
    cout <<h<<":"<<m<<":"<<n<< endl;

    return 0;
}
