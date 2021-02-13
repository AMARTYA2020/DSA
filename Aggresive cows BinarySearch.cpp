#include<bits/stdc++.h>
using namespace std;

bool ispossible(int arr[],int mid,int c){
    int prev=arr[0];
    int count=1;
    for(int i=1;i<arr.length();i++){
        if(arr[i]-prev>=mid)
        {
            cows++;
            prev=arr[i];
        }
        if(cows==c) return true;
    }
    return false;
}


int main(){
    int n,c;
    cin>>n>>c;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    if(arr.length()==0) return 0;
    int lb=1;
    int ub=1e9;
    int ans=0;
    while(lb<=ub){
        int mid=lb+(ub-lb)/2;
        if(ispossible(arr,mid,c)){
            ans=mid;
            lb=mid+1;           / AS WE HAVE TO FIND THE "LARGEST" minimum distance:
        }else{
            ub=mid-1;
        }
    }
    return ans;
}















