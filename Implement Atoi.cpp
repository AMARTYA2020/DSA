#include<bits/stdc++.h>
using namespace std;
// String to integer
int atoi(string s)
{
    int result=0;
    int sign=1;
    int i=0;
    int n=s.length();
    if(s[i]=='-'){
        sign=-1;
        ++i;
    }
    if(s[i]==' ' && i<n){
        ++i;
    }
    while(s[i]){
        if(s[i]-'0'>=0 && s[i]-'0'<=9)    
            result=result*10+(s[i]-'0');
        else
            return -1;
    ++i;
    }
    return result*sign
}


































