#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"1.Easy\n2.Normal\n3.Hard\n";
    cout<<"Choose leve : ";
    cin>>n;
    if(n==1)
    {
        cout<<"Easy";
    }
    else if(n==2)
    {
        cout<<"Normal";
    }
    else if(n==3)
    {
        cout<<"Hard";
    }
    else
    {
        cou<<"Error input"<<endl;
    }
}
