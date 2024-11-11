#include<bits/stdc++.h>
using namespace std;
#define int long long
int max_val(int t){
    int p=(t+1)/2;
    t-=p;
    t*=p;
    t*=50;
    return t;
}
signed main(){
    int x,y;
    cin>>x>>y;
    int r=(int)1e8,l=1LL;
    int need=x*150,min_time=LLONG_MAX;
    if(x==0){
        cout<<1<<'\n';
        return 0;
    }
    
    while(l<=r){
        int mid=(r-l)/2+l;
        if(need<=max_val(mid)){
            min_time=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    
    cout<<min_time+y+1<<'\n';
}