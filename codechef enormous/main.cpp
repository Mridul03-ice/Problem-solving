#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,count=0;
    cin>>n>>k;
    while(n--)
    {
        int a;
        cin>>a;
        if(a%k==0)
        {
            count++;
        }
    }
      cout<<count<<endl;
    return 0;
}
