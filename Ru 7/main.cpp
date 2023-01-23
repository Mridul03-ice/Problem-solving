#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;
const int N=105;
int express[N][N];
int income[N][N];
int dp[N][N];
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF,n+m){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                scanf("%d",&express[i][j]);
            }
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                scanf("%d",&income[i][j]);
            }
        }
        for(int i=1;i<=n;++i)
            dp[0][i]=-1000000000;
        dp[0][1]=0;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                dp[i][j]=dp[i-1][1]+income[i][j]-express[1][j];
                for(int k=1;k<=n;k++){
                    dp[i][j]=max(dp[i][j],dp[i-1][k]-express[k][j]+income[i][j]);
                }
            }
        }
        int ans = -99999999999;
        for(int i=1;i<=n;i++){
            ans = max(ans,dp[m][i]);
        }
        printf("%d\n",ans);
    }
    return 0;
}
