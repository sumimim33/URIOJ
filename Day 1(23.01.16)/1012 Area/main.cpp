#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a,b,c;
    float triangle, circle,trapezium ,square, rectangle;
    cin>>a>>b>>c;
    triangle = .5*(a*c);
    circle = 3.14159*c*c;
    trapezium = .5*(a+b)*c;
    square = b*b;
    rectangle = a*b;
     std::cout << std::setprecision(3) << std::fixed;
    cout << "TRIANGULO: " <<triangle<<endl;
    cout << "CIRCULO: " <<circle<< endl;
    cout << "TRAPEZIO: " <<trapezium<< endl;
    cout << "QUADRADO: " <<square<< endl;
    cout << "RETANGULO: " << rectangle<<endl;
    return 0;
}
