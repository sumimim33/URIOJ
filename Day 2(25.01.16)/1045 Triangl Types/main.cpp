#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    double ary[3];

    for(int i=0;i<3;i++)
    {
        cin>>ary[i];
    }
    int elements = sizeof(ary) / sizeof(ary[0]);
    std::sort(ary,ary+elements,std::greater<double>());
    double A=ary[0],B=ary[1],C=ary[2];

    if(A >= (B + C))
    cout<<"NAO FORMA TRIANGULO"<<endl;
    else {
    if(A*A==(B*B + C*C))
    cout<<"TRIANGULO RETANGULO"<<endl;
    if(A*A > (B*B+ C*C))
    cout<<"TRIANGULO OBTUSANGULO"<<endl;
    if(A*A < (B*B + C*C))
    cout<<"TRIANGULO ACUTANGULO"<<endl;

    if(A==B&&B==C)

        cout<<"TRIANGULO EQUILATERO"<<endl;

    if(((A==B)&&C!=A)||((B==C)&&A!=B)||((C==A)&&B!=C))

    cout << "TRIANGULO ISOSCELES" << endl;

    }

    return 0;
}
