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
    ll n;
    cin>>n;
    vll v;
    v.push_back(10);
    v.push_back(11);
    ll i=0;
    while(true){
        if(i>=v.size())break;
        ll x=v[i]*10;
        ll y=x+1;
        if(x<=n){
            v.push_back(x);
        }
        if(y<=n){
            v.push_back(y);
        }
        i++;
    }
    reverse(v.begin(),v.end());
    while(n>1){
        bool ok=false;
        for(int i=0;i<v.size();i++){
            if(n%v[i]==0){
                n/=v[i];
                ok=true;
            }
        }
        if(!ok){
            break;
        }
    }
    if(n==1) yes else no
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
