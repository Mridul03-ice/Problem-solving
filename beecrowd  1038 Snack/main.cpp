#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,y;
    double z=0;
    cin>>x>>y;
    if(x==1)
    {
        z=4.00*y;
    }
    else if(x==2)
    {
        z=4.50*y;
    }
    else if(x==3)
    {
        z=5.00*y;
    }
    else if(x==4)
    {
        z=2.00*y;
    }
    else if(x==5)
    {
        z=1.50*y;
    }
    cout<<fixed;
    cout<<setprecision(2)<<"Total: R$ "<<z<<endl;
    return 0;
}
