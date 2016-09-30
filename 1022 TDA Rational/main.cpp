#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
void make_small(ll a, ll b)
{
    ll s, t;
    bool flag = false;
    ll c;
    ll mini = abs(min(a,b));
    for(ll i=mini; i>=2; i--)
    {

        if(a%i==0&&b%i==0)
        {
            c = i;
            flag = true;
            break;
        }
    }

    if(flag)
    {
        s = a/c;
        t = b/c;
        cout<<a<<"/"<<b<<" = "<<s<<"/"<<t<<endl;
    }
    else
        cout<<a<<"/"<<b<<" = "<<a<<"/"<<b<<endl;
}

int main()
{
    int t;
    char c1,c2,o;
    ll n1,d1,n2,d2;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>n1>>c1>>d1>>o>>n2>>c1>>d2;

        switch(o)
        {
        case '+':
            a =  n1*d2+n2*d1;
            b = d1*d2;
            make_small(a,b);
            break;

        case '-':
            a =  n1*d2-n2*d1;
            b = d1*d2;
            make_small(a,b);
            break;

        case '/':
            a =  n1*d2;
                 b = n2*d1;

            make_small(a,b);
            break;
        case '*':
            a =  n1*n2;
                 b = d2*d1;
            make_small(a,b);
            break;

        }
    }
    return 0;
}
