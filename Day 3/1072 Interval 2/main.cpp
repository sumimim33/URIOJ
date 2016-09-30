#include <iostream>

using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    ll x,in=0,out=0;
    while(t--)
    {
        cin>>x;
        if(x>=10&&x<=20)
        in++;
        else
        out++;
    }
    cout << in<<" in" << endl;
    cout << out<<" out" << endl;

    return 0;
}
