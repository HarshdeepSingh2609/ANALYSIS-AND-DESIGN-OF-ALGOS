#include<iostream>
#include <cstdlib> 
#include<time.h>
using namespace std;

int  sum(int a[],int s,int l) {
 if(l==s) {
    return 0;
 }
 else {
    return  a[l]+sum(a,s,l+1);
 }
}

int main() {
  float y[100];int x[100]; int z=0;
  for(int i=1000;i<=100000;i+=1000) {
    int a[i];
    //generates random numbers from 1 to  i
   for(int k=1;k<=i;k++) {
    a[k]=rand()%i;
   }
   //random ends
int l=0;
   clock_t t1=clock(); 
   for(int j=1;j<=10;j++) {
   sum(a,i,l);
   }
   clock_t t2=clock(); 
   float avg_time=float(t2-t1)/10;
  x[z]=i;
  y[z]=avg_time;
  cout<< x[z]<<"  "<<y[z]<<endl;
  z++;
  }
  
}
