//https://www.hackerearth.com/problem/algorithm/measuring-weights-54c2dc75-b4ccf064/
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    cin >> n;   

    int arr[n];
    for(int i=0;i<n;i++){

        cin>>arr[i];

    }   


 

    long long dp[n];

    dp[0] = arr[0];

    for(int i=1;i<n;i++){

        dp[i] = max(dp[i-1] + arr[i], dp[i-1] - arr[i]);

    }


 

    cout<<dp[n-1];

    return 0;


 

}
