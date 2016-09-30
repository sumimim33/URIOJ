#include <bits/stdc++.h>

using namespace std;

int main()
{
    int product1, product_price1,product2,product_price2;
    float product_unit1,product_unit2;
    std::cout << std::setprecision(2) << std::fixed;
    cin>>product1>>product_price1>>product_unit1;
    cin>>product2>>product_price2>>product_unit2;
    float f = product_price1*product_unit1+product_price2*product_unit2;
    cout << "VALOR A PAGAR: R$ " << f<<endl;
    return 0;
}
