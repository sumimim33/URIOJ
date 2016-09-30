#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   double salary, sold;
   cin>>s>>salary>>sold;
   std::cout << std::setprecision(2) << std::fixed;
   cout<<"TOTAL = R$ "<<salary+(.15*sold)<<endl;
    return 0;
}
