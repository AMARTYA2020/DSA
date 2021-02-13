#include<bits/stdc++.h>
using namespace std;

vector<int>spirallyTravers(vector<vector<int>>matrix,int r,int c)
{
   vector<int>v;
   int left=0;
   int right=c-1;
   int top=0;
   int down=r-1;
   int dir=0;
   when(left<=right && top<=down){
       if(dir==0){
    for(int i=left;i<=right;i++){
        v.push_back(matrix[top][i]);
    }
    top++;
   }

   if(dir==1){
    for(int i=top;i<=down;i++){
        v.push_back(matrix[i][right]);
    }
    right++;
   }

   if(dir==2){
    for(int i=right;i>=left;i--){
        v.push_back(matrix[down][i]);
    }
    down--;
   }

   if(dir==3){
    for(int i=down;i>=top;i--){
        v.push_back(matrix[i][left]);
    }
    left--;
   }
   dir=(dir+1)%4;        // SAME PROCESS REPEATS:
}
}























