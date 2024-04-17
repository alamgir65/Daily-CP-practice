#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define all(x) x.begin(), x.end()
#define nl cout<<endl;
#define endl '\n'
#define love int main()
#define vtr vector
#define pii pair<int,int>
#define out(x) cout << x << '\n';
#define out2(x,y) cout << x << " " << y << '\n';
#define vii vector<int>
#define vll vector<ll>
#define dqii deque<int>
#define dqll deque<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve(){
    int n,k; cin>>n>>k;
    vii a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    long double sum=0.0,tmp=0;
    int i=0,j=0,cnt=0;
    while(j<n){
        tmp += a[j];
        cnt++;
        if(cnt == k){
            sum += tmp;
            tmp -= a[i];
            i++;
            cnt--;
        }
        j++;
    }
    double ans=sum/(n-k+1)*1.0;
    cout <<fixed<<setprecision(10)<<ans<<endl;
}
love{
    Alamgir
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;
}
