#include<iostream>
#include<time.h>
using namespace std;

void tt(int k, int n, char a[]) {
    if(k == n) {
       /* for(int i = 0; i < n;i++) {
            cout << a[i] << " ";
        }
        cout << endl;*/
    }
    else {
        a[k] = 'T';
        tt(k + 1, n, a);
        a[k] = 'F';
        tt(k + 1, n, a);
    }
}

int main() {
   
   

float y[100];int x[100]; int z=0;
   int n;
    int k = 0;
  for(int i=2;i<=100;i+=1) {
     char a[i];
   clock_t t1=clock(); 
    n=i;
   for(int j=1;j<=10;j++) {
   tt(k, n, a);
   }
   clock_t t2=clock(); 
   float avg_time=float(t2-t1)/10;
  x[z]=i;
  y[z]=avg_time;
  cout<< x[z]<<"  "<<y[z]<<endl;
  z++;
  }
  
    return 0;
}
