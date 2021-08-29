#include<iostream>
#include<vector>
using namespace std;
using ll=long long int;
void insertion_sort(vector<int> &A,int n){
        int i;
        int value,hole;
        for(i=1;i<n;i++){
            value=A[i];
            hole=i;
            while(hole>0 && A[hole-1]>value){
                A[hole]=A[hole-1];
                hole=hole-1;
            } 
            A[hole]=value;
        }
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
    // Code here
    int k;
    vector<int>A;
    int n;
    cin>>n;
    // cout<<n;
    for(int i=0;i<n;i++){
        cin>>k;
        // cout<<k<<" ";
        A.push_back(k);
    }
    insertion_sort(A,n);
    for(int i=0;i<n;i++){
       cout<<A[i]<<" ";
    }

    
    
}