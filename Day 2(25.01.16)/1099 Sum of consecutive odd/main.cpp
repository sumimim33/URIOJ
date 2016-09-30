#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int t;
    ll x,y,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        int s = abs(x-y);
        int m= min(x,y)+1;
        for(int i=1; i<s; i++)
        {
            if(m%2!=0)
                sum+=m;
            m++;
        }
        cout<<sum<<endl;
        sum=0;
    }

    return 0;
}
