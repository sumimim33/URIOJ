#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[7]={100,50,20,10,5,2,1};
    cout<<n<<endl;
    for(int i=0;i<7;i++)
    {
      int taken = n/a[i];
      n=n%a[i];
      cout<<taken<<" nota(s) de R$ "<<a[i]<<",00"<<endl;
    }
    return 0;
}
