#include<iostream>
#include <cstdlib> 
#include<time.h>
using namespace std;

void TOH(int n,char s,char sp,char d) {
   if(n==0)
   return ;
   else  {
    TOH (n-1,s,d,sp);
    /*cout<<"DISC MOVED FROM "<< s <<" to "<< d ;*/
    TOH(n-1,sp,s,d);
   }
}

int main() {
  float y[100];int x[100]; int z=0;
  int n;
  char s='A';char sp='B';char d='C';

  for(int i=2;i<=100;i+=10) {
   clock_t t1=clock(); 
    n=i;
   for(int j=1;j<=1;j++) {
   TOH(n,s,sp,d);
   }
   clock_t t2=clock(); 
   float avg_time=float(t2-t1)/10;
  x[z]=i;
  y[z]=avg_time;
  cout<< x[z]<<"  "<<y[z]<<endl;
  z++;
  }
  
}
