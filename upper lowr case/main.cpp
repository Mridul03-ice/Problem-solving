#include <iostream>
#include<bits/stdc++.h>
#include<cctype>
using namespace std;

void opStr(string& opo1)
{
    int m=opo1.length();
    for(int i=0; i<m; i++)
    {
        if(opo1[i]>='a'&&opo1[i]<='z')
            opo1[i]=opo1[i]-32;
        else if(opo1[i]>='A'&&opo1[i]<='Z')
            opo1[i]=opo1[i]+32;
    }
}
int main()
{
    string opo,opo1;
    cout<<"Input 1 : ";
    cin >> opo;
    cout<<"Input 2 : ";
    cin>>opo1;
    transform(opo.begin(),opo.end(),opo.begin(),::toupper);
    cout<<endl<<opo<<endl<<endl;;
    transform(opo.begin(),opo.end(),opo.begin(),::tolower);
    cout<<opo<<endl<<endl;
    opStr(opo1);
    cout<<opo1<<endl;
    return 0;
}
