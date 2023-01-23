#include <iostream>

using namespace std;

int main()
{
    int n,i,c=0;
    cout<<"Enter the number : ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        cout<<n<<" is prime number";
    }
    else
    {
        cout<<n<<" is not a prime numebr";

    }
    return 0;
}
