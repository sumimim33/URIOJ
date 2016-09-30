#include <iostream>

using namespace std;

int main()
{
    int J=7;
    for(int I=1;I<=9;I+=2)
    {
        for(int y=0;y<3;y++)
        {
            cout<<"I="<<I<<" J="<<J<<endl;
            J--;
        }
        J+=5;
    }
    return 0;
}
