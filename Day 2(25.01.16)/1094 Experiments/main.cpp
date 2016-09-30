#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int t;
    ll ammount, total=0, c=0,s=0,r=0;
    cin>>t;
    char type;
    while(t--)
    {
        cin>>ammount>>type;

        if(type=='C')
            c+=ammount;
        if(type=='R')
            r+=ammount;
        if(type=='S')
            s+=ammount;
        total=c+r+s;
    }
    std::cout<<std::setprecision(2)<<std::fixed;
    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;

    cout<<"Percentual de coelhos: "<<(c*100.00)/total<< " %"<<endl;
    cout<<"Percentual de ratos: "<<(r*100.00)/total<< " %"<<endl;
    cout<<"Percentual de sapos: "<<(s*100.00)/total<< " %"<<endl;
    return 0;
}
