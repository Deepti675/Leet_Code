//https://imgur.com/a/OVmzB4I
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int h;
    cin>>h;
    unordered_map<int,int>umap;
    for(int i=0;i<n;i++)
    {
        umap[a[i]]++;
    }
    for(auto x: umap)
    {
        if(h==x.first)
        cout<<x.second;
    }

    return 0;
}
