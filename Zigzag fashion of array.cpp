#include<bits/stdc++.h>
using namespace std;

void zigzagfashion(int arr[],int n)
{
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }else{
            if(arr[i]<arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }
}































