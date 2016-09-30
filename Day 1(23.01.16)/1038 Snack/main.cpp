#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p_code, quantity;
    float total ;
    cin>>p_code>>quantity;
    if(p_code==1)
    total = 4.00*quantity;
    else if(p_code==2)
    total = 4.50*quantity;
    else if(p_code==3)
    total = 5.00*quantity;
    else if(p_code==4)
    total = 2.00*quantity;
    else if(p_code==5)
    total = 1.50*quantity;
    std::cout<<std::setprecision(2)<<std::fixed;
    cout<<"Total: R$ "<<total<<endl;

    return 0;
}
