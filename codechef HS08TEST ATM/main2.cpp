#include <iostream>
#include<bits/stdc++.h>


using namespace std;

int main()
{
    double tot=0;
    int a=0;
    cin>>a>>tot;
    if((a%5==0) && (tot-a-0.50>=0))
    {
        double c;
        c=(tot-a)-0.50;
        cout<<fixed;
        cout<<setprecision(2)<<c<<endl;
    }

    else
    {
        cout<<fixed;
        cout<<setprecision(2)<<tot<<endl;
    }
    return 0;
}
