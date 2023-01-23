#include <iostream>

using namespace std;

int main()
{
    int i,j;
    while(true)
    {
        cin>>i>>j;
        if(i>0&&j>0)
            cout<<"1st"<<endl;
        else if(i<0&&j>0)
            cout<<"2nd"<<endl;
        else if(i<0&&j<0)
            cout<<"3rd"<<endl;
        else if(i>0&&j<0)
            cout<<"4th"<<endl;
    }
    return 0;
}
