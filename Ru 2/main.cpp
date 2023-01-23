#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,ti,b,re;
    string q,w;
    scanf("%d",&ti);
    while(ti--){
        cin>>q>>w;
        int nt[30]={0};
        for(a=0;w[a];a++)
            nt[w[a]-'a']++;
        for(a=re=0;q[a];a++){
            b=q[a]-'a';
            if(nt[b])re++,nt[b]--;
            else break;
        }
        printf("%d\n",re);
    }
    return 0;
}
