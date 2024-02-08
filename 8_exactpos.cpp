#include <iostream>
#include <time.h>

using namespace std;
/*int pivot(int arr[], int l, int h, int e)
{
    int i = l;
    int j = h;
    int p = arr[l];
    do
    {
        do
        {
            i++;
        } while (arr[i] <= p);
        do
        {
            j--;
        } while (arr[i] >= p);
        if (i < j)
        {
           // swap(a[i], a[j]);
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    } while (i <= j);
    arr[l] = arr[j];
    arr[j] = p;
    return j;
}*/
int pivot(int arr[], int l, int h, int e)
{
    int p = arr[l];
    int i = l;
    int j = h;

    do
    {
        while (arr[i] <= p && i < h) //
            i++;
        while (arr[j] >= p && j > l) // 
            j--;
        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

    arr[l] = arr[j];
    arr[j] = p;
    return j;
}

int main()
{
    float y[100];
    int x[100];
    int z = 0;
    for (int i = 10; i <= 1000; i += 10)
    {
        int arr[i];
        // Generates random numbers from 1 to i
        for (int k = 0; k < i; k++)
        {
            arr[k] = rand() % i;
        }
        int l = 0;
        int h = i;
        int e;
        for (int k = 0; k < i; k++)
        {
            e = rand() % i;
        }
        clock_t t1 = clock();
        for (int j = 1; j <= 10; j++)
        {
            int p = pivot(arr, l, h, e); // Pass the sizes of arr and brr
        }
        clock_t t2 = clock();
        float avg_time = float(t2 - t1) / 10;
        x[z] = i;
        y[z] = avg_time;
        cout << x[z] << "  " << y[z] << endl;
        z++;
    }

    return 0;
}
