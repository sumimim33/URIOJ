#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,c;
    bool is_triangle=false;
    cin>>a>>b>>c;
    if((a+b)>c&&(b+c)>a&&(c+a)>b)
    is_triangle=true;
     std::cout<<std::setprecision(1)<<std::fixed;
    if(is_triangle)
    {
        cout<<"Perimetro = "<<(a+b+c)<<endl;
    }
    else

    cout<<"Area = "<<.5*(a+b)*c<<endl;

    return 0;
}
