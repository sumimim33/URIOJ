#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a,b,c;

    cin>>a>>b>>c;
    float discriminant = b*b - 4*a*c;
    std:: cout<< std:: setprecision(5)<<std::fixed;
    if(a==0||discriminant<0)
        cout<<"Impossivel calcular"<<endl;


    else
    {
        float r1= (-b+sqrt(discriminant))/(2*a);
        float r2 = (-b-sqrt(discriminant))/(2*a);
        cout<<"R1 = "<<r1<<"\n"<<"R2 = "<<r2<<endl;
    }

    return 0;
}
