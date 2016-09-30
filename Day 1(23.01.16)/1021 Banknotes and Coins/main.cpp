#include <bits/stdc++.h>

using namespace std;

int main()
{

    double n, d[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.5, 0.25, 0.10, 0.05, 0.01};

    int t = 0, c;

  cin>>n;

    cout<<"NOTAS:"<<endl;

    t = 0;

    n+=1e-9;
    std::cout<<std::setprecision(2)<<std::fixed;

    while (d[t] >= 0.01)

    {

        c = 0;

        while (n >= d[t])

        {

            n -= d[t];

            c++;

        }

        if (d[t] == 1.0)

            printf("MOEDAS:\n");

        if (d[t] >= 2.0 )

        cout<<c<<" nota(s) de R$ "<< d[t]<<endl;

        else

            cout<<c<<" moeda(s) de R$ "<<d[t]<<endl;

        t++;

    }

    return 0;
}
