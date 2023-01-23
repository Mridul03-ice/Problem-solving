#include<bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")

typedef long long ll;
typedef unsigned long long ull;

#define sci1(a) scanf("%d",&a)
#define sci2(a,b) scanf("%d %d",&a,&b)
#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%d\n",a)
#define pf2(a,b) printf("%d %d\n",a,b)
#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define foR0(num) for(ll i = 0; i < num; i++)
#define foR1(num) for(ll i = 1; i <= num; i++)
#define foRev(num) for(ll i = num - 1; i >= 0; i--)
#define forIn(arr, num) for(ll i = 0; i < num; i++) sc1(arr[i]);
#define forIn1(arr, num) for(ll i = 1; i <= num; i++) sc1(arr[i]);
#define vpnt(ans) for(ll i = 0; i < ans.size(); i++) cout << ans[i] << (i + 1 < ans.size() ? ' ' : '\n');
#define apnt(arr, num) for(ll i = 0; i < num; i++) cout << arr[i] << (i + 1 < num ? ' ' : '\n');

#define mx 200005
#define mod 1000000007
#define PI acos(-1.0)
#define eps 1e-7
#define size1 505

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define mem(name, value) memset(name, value, sizeof(name))


#define en cout << '\n';
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define case cout << "Case " << t++ << ": ";

typedef vector <ll> vll;
typedef set <ll> sll;
typedef multiset <ll> msll;
typedef queue <ll> qll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;

#define all(v) (v).begin(), (v).end()
#define rev(v) reverse(all(v))
#define srt(v) sort(all(v))
#define srtGreat(v) sort(all(v), greater<ll>())

int main() {

    #ifndef ONLINE_JUDGE
    clock_t tStart = clock();

    #endif

    ll tc, n, m, num,re;

    sc1(tc);
    while(tc--) {
        sc2(n, m);
        ll arr[n + 5];
        mem(arr, 0);
        num = m;
        ll le = 0, ri = n - 1, temp = 9;
        while(temp != 0) {

            if(m >= temp * 2) {
                arr[le] = temp;
                arr[ri] = temp;
                le++;
                ri--;
                if(le > ri) break;
                m -= (2*temp);
            }
            else temp--;
            if(m<0)break;
        }
        if(n & 1) {
            if(m > 0 && m <= 9) arr[n/2] = m;
        }

        ll sum = 0;
        foR0(n) sum += arr[i];
        if(sum != num||arr[0]==0) cout << -1 << '\n';
        else {
            for(ll i = 0; i < n - 1; i++) {
                cout << arr[i];
            }
            cout << arr[n-1] << '\n';
        }
    }

}
