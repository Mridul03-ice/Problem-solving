#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter year : ";
    cin>>n;
    switch(n%4)
    {
    case 0:
        cout<<n<<" is leap year.";
        break;
    default:
        cout<<n<<" is not leap year.";
        break;
    }
    return 0;
}
