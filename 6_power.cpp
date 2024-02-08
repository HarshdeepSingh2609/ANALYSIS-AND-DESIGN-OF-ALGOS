#include<iostream>
#include<time.h>
using namespace std;
int pow(int xx,int n) {
    int num=xx;
    int raisedto=n;
    int ans=1;
    while(raisedto>0) {
        while(raisedto%2==0) {
            num=num*num;
            raisedto=raisedto/2;
        }
        raisedto--;
        ans=ans*num;
    }
    return ans;
}
int main() {
    float y[100];int x[100]; int z=0;
    int xx=2;
    int n;
    for(int i=1;i<=100;i+=1){
   clock_t t1=clock(); 
    n=i;
   for(int j=1;j<=10;j++) {
        int ans=pow(xx,n);
        // cout<<ans<<endl;
   }
   clock_t t2=clock(); 
   float avg_time=float(t2-t1)/10;
  x[z]=i;
  y[z]=avg_time;
  cout<< x[z]<<"  "<<y[z]<<endl;
  z++;
 }
}
