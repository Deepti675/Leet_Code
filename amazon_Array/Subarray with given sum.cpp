//#method1
//normal method
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int>v;
        int sum;
       for(int i=0;i<n;i++)
       {
           sum=0;
          for(int j=i;j<n;j++)
          {
              sum+=arr[j];
               if(sum==s)
          {
              v.push_back(i+1);
              v.push_back(j+1);
              return v;
          }
            else if(sum<s)
            continue;
            else
             break;
             
          }
        }
        v.push_back(-1);
        return v;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends

//#method2
//sliding window method
class solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int>v;
        int sum=arr[0];
        int l=0,i;
        for(i=1;i<=n;i++)
        {
            //sum+=arr[i];
            while(sum>s&&l<i-1)
            {
                sum=sum-arr[l];
                l++;
            }
           
            if(sum==s)
            {
                v.push_back(l+1);
                v.push_back(i);
                return v;
            }
             if(i<n)
            {
                sum=sum+arr[i];
            }
            
        }
        v.push_back(-1);
        return v;
    }
};
