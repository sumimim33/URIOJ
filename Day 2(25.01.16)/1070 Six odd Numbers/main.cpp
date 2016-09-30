#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    if(n%2==0)
        i=n+1;
    else
        i=n;
    for(int j=i; j<i+11; j+=2)
        cout<<j<<endl;

    return 0;
}
