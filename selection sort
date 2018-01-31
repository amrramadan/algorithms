#include <iostream>
using namespace std;
// selection sort  N*N operations
void sort (int a[], int n)
{
    for (int i=0;i<n-1;i++)
{
    int jMin =i;
    for(int j=i+1; j<n;j++)
    {
      if(a[j]<a[jMin])
            jMin=j;
    }
    swap(a[i],a[jMin]);
}
}

int main() {

   int n;
   cin>>n;
    int* a = NULL;
    a = new int[n];
   for (int i = 0; i < n; i++)
        cin >> a[i]; //intialization
   sort(a,n);
    for (int i = 0; i < n; i++)
        cout<< a[i]; //intialization

}

