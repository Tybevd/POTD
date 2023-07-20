#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int findSubString(string s){
    int n=s.size();
    unordered_map<char,int> m;
    for(int i=0;i<n;i++)
    {
        m[s[i]]++;
    }
    int dis=m.size();
    int head=-1,tail=0,cn=0,ans=n;
    m.clear();
    while(tail<n){
        while(head+1<n&&cn<dis){
            m[s[++head]]++;
            if(m[s[head]]==1)
            {
                cn++;
            }

        }
        if(cn==dis) ans=min(ans,head-tail+1);
        if(head>=tail){
            m[s[tail]]--;
            if(m[s[tail]]==0) cn--;
            tail++;
            if(cn==dis){
                ans=min(ans,head-tail+1);
            }
        }

    }
    return ans;
}
