#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int N,int x){
    for(int i=0;i<N;i++){
    if arr[i]==x;
    return i;
    }
    return -1;
}

int main(){
    int arr[]={10,20,30,40,50};
    int x=10;
    int size=sizeof(arr)/sizeof(arr[0]);

    int result = search(arr,N,x);
    (result==-1)
    cout<<"Element is not present in array";
    cout<<"Element is present at index"; << result;
return 0;   
}