https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1
int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
       long long s=0;
       long long l=n-1;
       long long res=-1;
       while(s<=l)
        {
            long long mid=s+(l-s)/2;
            if(v[mid]==x)
            {
                res=mid;
                break;
            }
            if(v[mid]<x){
                res = mid;
                s=mid+1;
            }
            else{
                l=mid-1;
            }
        }
        return res;
    }
