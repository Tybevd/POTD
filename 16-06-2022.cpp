#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
void in(vector<int> a){
    int ans[n][n];
    int left=0,right=n-1;
    int top=0,down=n-1;
    int cnt=0;
    while(left<=right&&top<=down)
    {
      
        for(int i=left;i<=right;i++)
        {
            ans[top][i]=a[cnt++];
        }
        
        top++;
        for(int i=top;i<=down;i++)
        {
            ans[i][right]=a[cnt++];
        }
        right--;
            for(int i=right;i>=left;i--)
            ans[down][i]=a[cnt++]; 
        down--;
            for(int i=down;i>=top;i--)
            ans[i][left]=a[cnt++];
            
   
        left++;
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<ans[i][j]<<" ";
        cout<<endl;
    }
}
main(){
   
        cin>>n;
        vector<int> a(n*n,0);
        for(int i=0;i<n*n;i++)
        {
            int x;cin>>x;
            a[i]=x;
        }
        sort(a.begin(),a.end());
        in(a);
}
