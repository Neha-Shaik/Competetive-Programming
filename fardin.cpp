#include<iostream>
#include<algorithm>
using namespace std;

void helper(int a[], int st, int ed){
	if(st>=ed) return;
	else{
		int mid = st + (ed-st)/2;
		helper(a, st, mid);
		helper(a, mid+1, ed);
		merger(a, st, ed);
	}
}

void mergeSort(int a[], int n){
	return helper(a, 0, n-1);
}

int main(){
	int n; cin>>n; 
	int a[n];
	for(int i=0;i<n; i++) cin>>a[i];
	mergeSort(a, n);
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
	cout<<endl;
}
