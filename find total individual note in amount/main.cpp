#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a;
    cout<<a<<"\n";
    cout<<a/500<<" nota(s) de R$ 500,00\n";
    b=(a%500);

    cout<<b/100<<" nota(s) de R$ 100,00\n";
    b=(b%100);
    b=(b%50);cout<<b/50<<" nota(s) de R$ 50,00\n";
    b=(b%50);
    cout<<b/20<<" nota(s) de R$ 20,00\n";
    b=(b%20);
    cout<<b/10<<" nota(s) de R$ 10,00\n";
    b=(b%10);
    cout<<b/5<<" nota(s) de R$ 5,00\n";
    b=(b%5);
    cout<<b/2<<" nota(s) de R$ 2,00\n";
    b=(b%2);
    cout<<b/1<<" nota(s) de R$ 1,00\n";
    return 0;
}
