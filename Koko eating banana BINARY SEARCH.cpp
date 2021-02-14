#include<bits/stdc++.h>
using namespace std;

bool ispossible(vector<int>piles,int H,int speed)
{
    int hours=0;
    for(int i=0;i<piles.size();i++){
        if(piles[i]<=speed){      // SINCE KOKO'S EATING SPEED IS MORE SO SHE KEEPS ON EATING
            hours=hours+1;
        }else{
            hours=hours+1+(piles[i]/speed); // elese her speed gets divided
        }
    }
    if(hours<=H) return true;
    return false;
}

int mineatingspeed(vector<int>&piles,int H)
{
    int lb=1;
    int ub=*max_element(piles.begin(),piles.end());
    int ans=0;
    while(lb<=ub){
        int mid=lb+(ub-lb)/2;
        if(ispossible(piles,H,spedd)==true){
            ans=mid;
            ub=mid-1;
        }else{
            lb=mid+1;
        }
    }
    return ans;
}
