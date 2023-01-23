#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x,a,b,c;
    cin>>a>>b>>c;
    x=(b*b)-(4*(a)*(c));
    if(x>0 && a!=0)
    {
        double x1,x2;
        x1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
        x2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
        printf("R1 = %.5f\n",x1);
        printf("R2 = %.5f\n",x2);
    }
    else
        cout<<"Impossivel calcular"<<endl;

    return 0;
}
