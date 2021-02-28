#include<bits/stdc++.h>
using namespace std;

vector<string>ans;
void permutation(string s,int start,int last)
{
    if(start==last) ans.push_back(s);
    else{
        for(int i=start;i<last;i++){
            swap(s[start],s[i]);
            permutation(s,start+1,last);
            swap(s[start],s[i]);
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        permutation(str,0,str.size()-1);
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        ans.clear();
        cout<<endl;
    }
    return 0;
}
