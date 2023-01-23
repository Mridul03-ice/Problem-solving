#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter marks : ";
    cin>>n;
    switch(n/10)
    {

        case 8:
        cout<<"A+";
        break;
        case 7:
        cout<<"A";
        break;
        case 6:
        cout<<"B";
        break;
        case 5:
        cout<<"C";
        break;
        case 4:
        cout<<"D";
        break;
        default:
        cout<<"F";

    }
        return 0;
}
