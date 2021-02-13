#include<bits/stdc++.h>
using namespace std;

class solution{
    int firstbadversion(int n){
        long long int low=1;
        long long int high=n;
        long long int ans=0;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(isBadVersion(mid)==true){
                answer=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }

        }
        return answer;
    }
};
