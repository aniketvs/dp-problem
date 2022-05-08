#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int f=0,s=1,r;
    for(int i=2;i<=n;i++){
        r=f+s;
        f=s;
        s=r;
    }
    cout<<r;
}