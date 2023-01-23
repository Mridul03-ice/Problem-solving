#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
#include<cctype>

using namespace std;

int main()
{
    string a,b,c;
    cin>>a>>b>>c;
     if(a=="S"||a=="H"||a=="D"||a=="C")
    {
        if(b=="6"&&b=="7"&&b=="8"&&b=="9"&&b=="T"&&b=="J"&&b=="Q"&&b=="K"&&b=="A")
        {
            if(c=="S"&&c=="H"&&c=="D"&&c=="C")
                cout<<"YES"<<endl;
        }
        cout<<"YES"<<endl;
    }
    else
    {
                cout<<"NO"<<endl;

    }
    return 0;
}
