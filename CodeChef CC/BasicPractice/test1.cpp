#include<iostream>
using namespace std;
using ll=long long int;
int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
    // cout<<"Hello World"<<endl;
    ll n, k;
    cin>>n>>k;
    ll ans = 0;
    while(n--){
        ll x; cin>>x;
        if(x%k ==0) ans++;
    }
    cout<<ans;
}