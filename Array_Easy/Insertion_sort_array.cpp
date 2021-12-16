
#include <iostream>

using namespace std;
void insertion_sort_array(int a[],int n)
{
    int i,key,j;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        //shifting and main sorting occuring here
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;//previous value ka ckeck krne k liye
            
        }
        a[j+1]=key;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[]={12,2,34,5,16};
    int n=sizeof(a)/sizeof(int);
    insertion_sort_array(a,n);
    return 0;
}
