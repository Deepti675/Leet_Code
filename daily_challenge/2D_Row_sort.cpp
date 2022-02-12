
//sorting each row of 2d array 

#include <bits/stdc++.h>

using namespace std;
int **Sort2DArrayByRow(int r,int c,int** arr){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            for (int k = 0; k < c - j - 1; k++)
      {
        if (arr[i][k] > arr[i][k + 1])
        {
          // swapping of elements
          swap(arr[i][k], arr[i][k + 1]);
        }
      }

        }
    }
    return arr;
}
int main()
{
    int r,c;
    cin>>r>>c;
    int** arr=new int* [r];
    for(int i=0 ;i <r ;i++)
    {
        arr[i]=new int[r];
         
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int** result=Sort2DArrayByRow(r,c,arr);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
