#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void sortString(string &str)
{
    sort(str.begin(),str.end());
    cout<<str<<endl;
}

int main()
{
    string a;
    cin>>a;
    sortString(a);
    return 0;
}
