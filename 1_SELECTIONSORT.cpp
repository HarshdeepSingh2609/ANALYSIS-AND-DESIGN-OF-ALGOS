#include<iostream>
#include <cstdlib> 
#include<time.h>
using namespace std;
void sel_sort(int a[],int s) {
  for(int i=0;i<s-1;i++) {
    int min=i;
    for(int j=i+1;j<=s;j++) {
      if(a[i]>a[j]) {
        min=j;
      }
    }
    if(min!=i) {
      swap(a[i],a[min]);
    }
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

   clock_t t1=clock(); 
   for(int j=1;j<=10;j++) {
   sel_sort(a,i);
   }
   clock_t t2=clock(); 
   float avg_time=float(t2-t1)/10;
  x[z]=i;
  y[z]=avg_time;
  cout<< x[z]<<"  "<<y[z]<<endl;
  z++;
  }
  
}
