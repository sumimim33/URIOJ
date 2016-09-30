#include <iostream>

using namespace std;

typedef long long ll;
int main()
{
    ll a,b;
    cin>>a>>b;
    if(a%b==0||b%a==0)
    cout<<"Sao Multiplos"<<endl;
    else
    cout<<"Nao sao Multiplos"<<endl;
    return 0;
}
