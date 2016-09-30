#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    ll x,y,d,total=0;

    cin>>x>>y;
    ll m=min(x,y);
    ll dif = abs(x-y)-2;
    if(m%2==0)
        d=m+1;
    else
        d=m+2;
    for(int i= d; i<=d+dif; i+=2)
        total+=i;
    cout <<total << endl;
    return 0;
}
