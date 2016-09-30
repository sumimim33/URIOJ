#include <iostream>

using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    ll x;
    while(t--)
    {
        cin>>x;
        if(x==0)
            cout<<"NULL"<<endl;
        else if(x<0&&x%2==0)
            cout<<"EVEN NEGATIVE"<<endl;
        else if(x<0&&x%2!=0)
            cout<<"ODD NEGATIVE"<<endl;
        else if(x>0&&x%2==0)
            cout<<"EVEN POSITIVE"<<endl;
        else
            cout<<"ODD POSITIVE"<<endl;
    }

    return 0;
}
