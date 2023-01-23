#include <iostream>
#include<bits/stdc++.h>

using namespace std;

typedef vector<int>vi;
typedef pair<int,int>pi;
typedef long long ll;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a;i<=b;i++)

int main()
{
    int n;
    cin>>n;
    REP(i,1,n)
    {
        search(i);
    }
    return 0;
}
