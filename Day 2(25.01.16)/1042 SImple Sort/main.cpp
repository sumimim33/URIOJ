#include <iostream>

using namespace std;

int main()
{
    int a[3],b[3];
    for(int i=0; i<=2; i++)
    {
        cin>>a[i];
        b[i]=a[i];

    }
    int temp;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            if(a[j]>a[j+1])
            {
                temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0; i<=2; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<endl;
    for(int i=0; i<=2; i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}
