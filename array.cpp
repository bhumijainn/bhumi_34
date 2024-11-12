#include<bits/stdc++.h>
using namespace std;
int n,i,j;
cin>>n;
int nums[n];
for(j=0;j<n;j++){
    cin>>nums[j]>>endl;
}
int ans[2n];
for(i=0;i<n;i++){
ans[i]==nums[i];
ans[i+n]==nums[i];
cout<<ans[i]<<endl;
}