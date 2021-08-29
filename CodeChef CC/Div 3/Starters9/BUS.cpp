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
    int t;
    int m,n,q,capacity,num;
    char ch;
    cin>>t;
    bool found=false;
    
    while(t--){
        cin>>n>>m>>q;
        // cout<<n<<" "<<m<<" "<<q<<endl;
        int status[n];
        for(int i=0; i<n; i++){
            status[i]=0;
        }
        found = false;
        capacity = 0;
        for(int i=0;i<q;i++){
            cin>>ch>>num;
            // cout<<"Printing ch and num : "<<ch<< " "<<num<<endl;
            if(ch=='+'){
                if(capacity>=m){
                    cout<<"Inconsistent"<<endl;
                    found=true;
                    // break;
                }
                if(status[num-1]==0){
                    status[num-1]=1;
                    capacity++;
                    
                }
                else {
                    if(!found) cout<<"Inconsistent"<<endl;
                    found=true;
                    // break;
                }
            }
            else{
                if(status[num-1]==1){
                    status[num-1]=0;
                    capacity--;
                    
                }
                else{
                    if(!found) cout<<"Inconsistent"<<endl;
                    found=true;
                    // break;
                }
            }
        }
        // cout<<"Printing capacity"<<capacity<<endl;
        if(found==false )
        cout<<"Consistent"<<endl;
        
    }
    

}