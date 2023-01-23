#include <bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
int dp[10005],a[105];
int main()
{
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--)
    {
        memset(dp,INF,sizeof dp);
        dp[0]=0;
        int k,n;
        cin>>k>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            for(int j=10004;j>=a[i];j--)
                dp[j]=min(dp[j],dp[j-a[i]]+1);
        int pos;
        for(int i=k;i<10005;i++)
            if(dp[i]!=INF)
                {pos=i;break;}
        cout<<pos<<' '<<dp[pos]<<'\n';
    }
    return 0;
}
