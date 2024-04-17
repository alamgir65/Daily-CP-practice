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
    int n; cin>>n;
    map<int,int> mp;
    vii a(n);
    ll sum=0;
    vector<vii> track(1e6+7);
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]=i+1;
        track[a[i]].pb(i+1);
        sum += a[i];
    }
    vii ans;
    for(int i=0;i<n;i++){
        ll tmp=sum-2*a[i];
        if(mp.find(tmp) != mp.end()){
            for(auto x:track[tmp]){
                if(x != i+1) ans.pb(x);
            }
        }
    }
    out(ans.size())
    for(auto val:ans) cout<<val<<" ";
    cout<<'\n';

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
