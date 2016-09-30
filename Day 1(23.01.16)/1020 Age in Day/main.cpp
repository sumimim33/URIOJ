#include <iostream>

using namespace std;
typedef long long ll;
int main()
{
    ll n,h,m,s;
    cin>>n;
    h= n/365;
    n=n%365;
    m = n/30;
    n=n%30;
    cout <<h<<" ano(s)\n"<<m<<" mes(es)\n"<<n<<" dia(s)"<<endl;

    return 0;
}
