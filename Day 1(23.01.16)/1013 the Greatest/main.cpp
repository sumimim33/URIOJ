#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,x,y;
    cin>>a>>b>>c;
    x = ((a+b)+abs(a-b))*.5;
    y = ((x+c)+abs(x-c))*.5;
    cout<<y<<" eh o maior"<<endl;
    return 0;
}

