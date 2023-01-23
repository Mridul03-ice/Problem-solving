#include <iostream>

using namespace std;

int main()

{
    string a;
    cin>>a;
    int sec;
    if(a=="january"||a=="march"||a=="may"||a=="july"||a=="august"||a=="october"||a=="december")
        cout<<"Total seconds in "<<a<<" : "<<31*24*60*60;
    else if(a=="april"||a=="june"||a=="september"||a=="november")
        cout<<"Total seconds in "<<a<<" : "<<30*24*60*60;
    else if(a=="february")
        cout<<"Total seconds in "<<a<<" : "<<28*24*60*60;
        else
            cout<<"Error month";
    return 0;
}
