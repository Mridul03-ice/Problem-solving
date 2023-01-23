#include <iostream>
#include<bits/stdc++.h>

using namespace std;
class Pet
{
public:
    string name;
    string dog()
    {
        string res="Lollie";
        return res;
    }
};

int main()
{
    Pet na;
    string temp=na.dog();
    cout<<"My pet's name is "<<temp<<endl;
}
