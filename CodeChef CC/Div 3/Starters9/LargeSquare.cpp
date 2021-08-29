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
    // Code here
    int t,N,A;
    cin>>t;
    int i;
    int mesqlenth;
    for(i=0;i<t;i++){
        cin>>N>>A;
        for(int j=0;1;j++){
            if(j*j>N){
                mesqlenth=(j-1)*A;
                cout<<mesqlenth<<endl;
                break;
            }
        }
    }
}