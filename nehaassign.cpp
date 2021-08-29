#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int q;
 scanf("%d",q);
 char c;
 int p,x,y,flag=0;
 char prices[q];
 for(i=0;i<q;i++){
     cin>>c;
     if(c=='B'){
         cin>>p;
         prices[i]=p;
         cout<<"Buying Successful"<<endl;
     }
     else{
         flag=0;
         cin>>x>>y;
         for(int j=0;j<q;j++){
        
         	
            if(prices[j]>x && prices[j]<y ){
                printf("%d \n",prices[j]);
                prices[j]=0;
                flag=1;
                break;
            } 
        }
        if(flag==0){
            cout<<-1<<endl;
        }
     }
 }
 for(int i=0;i<q;i++){
     if(prices[i]!=0){
        printf("%d  ",prices[i]); 
     }
 }

    return 0;
}
