#include<bits/stdc++.h>
using namespace std;
#define ll long long
double Diem(int n){
    double D;
    if(n>=3&&n<=4) D=2.5;
    if(n>=5&&n<=6) D=3.0;
    if(n>=7&&n<=9) D=3.5;
    if(n>=10&&n<=12) D=4.0;
    if(n>=13&&n<=15) D=4.5;
    if(n>=20&&n<=22) D=5.5;
    if(n>=23&&n<=29) D=6.5;
    if(n>=30&&n<=32) D=7.0;
    if(n>=33&&n<=34) D=7.5;
    if(n>=35&&n<=36) D=8.0;
    if(n>=37&&n<=38) D=8.5;
    if(n>=39&&n<=40) D=9.0;
    return D;
}
string check(ll n){
    ll a[92];
    a[0]=0;
    a[1]=1;
    for(int i=2;i<92;i++)
    a[i]=a[i-1]+a[i-2];
    for(int i=0;i<92;i++)
    {
        if(n==a[i]) return "YES";
    }
    return "NO";
}
main(){
   int t;cin>>t;while(t--)
   {
    ll n;cin>>n;
    cout<<check(n)<<endl;

   }
        

  
}
