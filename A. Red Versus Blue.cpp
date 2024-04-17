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
    int n,r,b; cin>>n>>r>>b;
    int d=(r/b)/2 + r%b;
    string ans="";
    int cnt=0;
    for(int i=0;i<n;i++){
        if(cnt>=d && b>0){
            ans += 'B';
            cnt=0;
            b--;
        }
        else if(r>0){
            ans += 'R';
            r--;
        }
        cnt++;
    }
    bool f=1;
    for(int i=0;i<b;i++){
        if(f){
            ans.pb('B');
            f=0;
        }
        else{
            ans = "R" + ans;
            f=1;
        }
    }
    cout << ans <<"\n";
}
love{
    Alamgir
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;
}
