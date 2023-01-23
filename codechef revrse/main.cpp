#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        while(n)
        {
            count=count*10+n%10;
            n/=10;
        }
        cout<<count<<endl;
    }
    return 0;
}
