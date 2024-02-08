#include<iostream>
#include<time.h>
#include<algorithm>
using namespace std;

void merge(int arr1[], int arr2[], int s1, int s2, int arr3[]) {
    int a = 0;
    int b = 0;
    int i = 0;

    while (a < s1 && b < s2) {
        if (arr1[a] < arr2[b]) {
            arr3[i] = arr1[a];
            i++;a++;
        } else {
            arr3[i] = arr2[b];
            i++;b++;
        }
    }

    while (a < s1) {
        arr3[i] = arr1[a];
        i++;a++;
    }

    while (b < s2) {
        arr3[i] = arr2[b];
        i++;b++;
    }

    // Print the merged array
   /* for (int j = 0; j < s1 + s2; j++) {
        cout << arr3[j] << " ";
    }
    cout << endl;*/
}

int main() {
    float y[100];int x[100]; int z=0;
    for (int i = 10000; i <= 100000; i += 10000) {
        int arr[i];
        int brr[i];

        // Generates random numbers from 1 to i
        for (int k = 0; k < i; k++) {
            arr[k] = rand() % i;
        }
        sort(arr, arr + i);

        for (int l = 0; l < i; l++) {
            brr[l] = rand() % i;
        }
        sort(brr, brr + i);

        int crr[i + i]; // The size should be i + i
        clock_t t1=clock(); 
   for(int j=1;j<=10;j++) {
 merge(arr, brr, i, i, crr); // Pass the sizes of arr and brr
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
