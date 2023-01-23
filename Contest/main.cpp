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
        cout<<"A+"<<endl;
        break;
        case 7:
        cout<<"A"<<endl;;
        break;
        case 6:
        cout<<"B"<<endl;;
        break;
        case 5:
        cout<<"C"<<endl;;
        break;
        case 4:
        cout<<"D"<<endl;
        break;
        default:
        cout<<"F"<<endl;

    }
        return 0;
}
