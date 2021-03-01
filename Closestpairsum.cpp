#include<bits/stdc++.h>
using namespace std;
// Description:
/*
Given two arrays: arr1[]=1,4,5,7 & arr2[]=10,20,30,40,       target=43    traverse 1st array and 2nd array in reverse keep on checking
*/
void closestpair(int arr1[],int arr2[],int m,int n,int x)
{
    int diff=INT_MAX;
    int i,j;
    int start=0;
    int last=n-1;
    while(start<m && last>=0){
        if(abs(arr1[start]+arr2[last]-x)<diff){
            i=start;
            j=last;
            diff=abs(arr1[start]+arr2[last]-x);
        }
    }
    if(arr1[start]+arr2[last]>x){
        last--;
    }else{
        start++;
    }
    cout<<"=>"arr1[i]<<" "<<arr2[j]<<endl;
}

int main()
{

    int arr1[]={1,4,5,7};
    int arr2[]={10,20,30,40};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    int x=43;
    closestpair(arr1,arr2,m,n,x);
    return 0;
}
