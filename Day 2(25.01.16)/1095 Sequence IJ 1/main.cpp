#include <iostream>

using namespace std;

int main()
{
    int i=1;
    for(int x=60;x>=0;x-=5)
    {
        cout<<"I="<<i<<" J="<<x<<endl;
        i+=3;
    }
    return 0;
}
