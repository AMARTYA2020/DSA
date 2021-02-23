#include<bits/stdc++.h>
using namespace std;

void swapping(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}


int partitionf(int arr[],int low,int high)          // CREATING PARTITION FUNCION:
{
    int pivot=arr[high];    //   WE ARE SELECTING LAST ELEMENT AS A PIVOT ELEMENT:
    int partitionindex=low;
    for(int i=low;i<high;i++){
        if(arr[i]<=pivot){
            swapping(&arr[i],&arr[partitionindex]);
            partitionindex++;
        }
    }
    swapping(&arr[partitionindex],&arr[high]);
    return partitionindex;
}

void quicksort(int arr[],int low,int high)               // CREATING RECURSIVE SORITNG FUNCION:
{
    if(low<high){
        int pi=partitionf(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
int main()
{
    int arr[]={1,4,2,0};
    quicksort(arr,0,3);
    for(int i=0;i<=3;i++) cout<<arr[i]<<" ";
    return 0;
}
