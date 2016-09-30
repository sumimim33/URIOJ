#include <bits/stdc++.h>

using namespace std;

int main()
{
    float n1,n2,n3,n4,avg;
    cin>>n1>>n2>>n3>>n4;
    avg= (n1*2+n2*3+n3*4+n4*1)*.1;
    bool is_exam=false;
    std::cout<<std::setprecision(1)<<std::fixed;
    cout<<"Media: "<<avg<<endl;
    if(avg>=7.0)
        cout<<"Aluno aprovado."<<endl;

    else if(avg<5.0)
        cout<<"Aluno reprovado."<<endl;
    else if(avg>=5.0&& avg<=6.0)
    {
        cout << "Aluno em exame." << endl;
        is_exam =true;
    }
    if(is_exam)
    {
        float typed_scor;
        cin>>typed_scor;
        cout<<"Nota do exame: "<<typed_scor<<endl;
        avg = (avg+typed_scor)*.5;
        if(avg>=5.0)
        {
            cout<<"Aluno aprovado."<<endl;
        }
        else if(avg<=4.9)
        {
            cout<<"Aluno reprovado."<<endl;
        }

        cout<<"Media final: "<<avg<<endl;
    }

    return 0;
}
