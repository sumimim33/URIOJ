#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

struct consumptios
{
    ll res_no;
    double consumption;
    ll per_consumption;
};



int main()
{
    ll t, c=0;
    ll cc=0;
    bool is_first= true;
    while(1)
    {
        cin>>t;
        if(t==0)
        {
            break;
        }

        else
        {
            if(!is_first)
            {
                cout<<endl;
            }
            is_first=false;
            c++;
            ll temp;
            ll x_temp;
            double avg=0, res =0;
            consumptios obj[t];
            for(int i=0; i<t; i++)
            {
                cin>>obj[i].res_no>>obj[i].consumption;
                obj[i].per_consumption = ll(obj[i].consumption/obj[i].res_no);
                res+=obj[i].res_no;
                avg+=obj[i].consumption;

            }

            for(int i=0; i<t-1; i++)
            {
                for(int j=0; j<t-i-1; j++)
                {
                    if(obj[j].per_consumption>obj[j+1].per_consumption)
                    {
                        temp = obj[j].per_consumption;
                        obj[j].per_consumption = obj[j+1].per_consumption;
                        obj[j+1].per_consumption = temp;

                        x_temp = obj[j].res_no;
                        obj[j].res_no = obj[j+1].res_no;
                        obj[j+1].res_no = x_temp;

                    }

                }
            }

            cout<<"Cidade# "<<c<<":"<<endl;
            for(int i=0; i<t; i++)
            {

                if(obj[i].per_consumption==obj[i+1].per_consumption)
                {
                    cc+=obj[i].res_no+obj[i+1].res_no;
                    int count =0;
                    for(int j=i+2; j ; j++)
                    {

                        if(obj[i].per_consumption==obj[j].per_consumption)
                        {
                            cc+= obj[j].res_no;
                            count++;
                        }
                        else
                            break;

                    }

                    cout<<cc<<"-"<<obj[i].per_consumption<<" ";
                    i+=count+1;
                    cc=0;
                }
                else
                    cout<<obj[i].res_no<<"-"<<obj[i].per_consumption<<" ";

            }

            cout << "\nConsumo medio: ";
            cout << fixed << setprecision(2) << floor((avg / res) * 100) / 100<<" m3."<<endl;

        }
    }
    return 0;
}
