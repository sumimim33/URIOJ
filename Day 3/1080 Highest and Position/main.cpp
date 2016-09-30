#include <iostream>

using namespace std;

int main()
{
    int a[100];

    for(int i=0;i<100;i++)
    {
        cin>>a[i];
    }
    int mx=a[0],t=0;
    for(int i=0;i<100;i++)
    {
        if(a[i]>mx)
        {
            mx=a[i];
            t=i;
        }
    }
    cout << mx<<endl<<t+1 << endl;
    return 0;
}
