#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<int>intervals)
{
    vector<vector<int>>merging;
    int start=intervals[0][0];
    int last=intervals[0][1];
    for(auto i:intervals){
        if(i[0]>end){
            merging.push_back({start,last});
            start=i[0];
            last=i[1];
        }else{
            end=max(end,i[1]);
        }

    }
    merging.push_back({start,end});
    return merging;
}























