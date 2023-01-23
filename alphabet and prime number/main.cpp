#include <iostream>

using namespace std;

int main()
{
    int i, chk=0, j;
    char k;
    for(i=1; i<=26; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               chk++;
               break;
           }
        }
        if(chk==0 && i!=1)
            for(k='A';k<='Z';k++)
            cout<<k<<i;
        chk = 0;
    }
    return 0;
}
