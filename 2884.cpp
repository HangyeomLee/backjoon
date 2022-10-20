#include<bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n,m=0;
    int i;
    int cnt=8;
    for(i=0;i<8;i++){
        cin>>n;
        if(n<=m){
            cnt--;
        }
        else if(n>=m){
            cnt++;
        }
        m=n;
    }
    if(cnt==16){
        cout<<"ascending";
    }
    else if(cnt==2){
        cout<<"descending";
    }
    else{
        cout<<"mixed";
    }
    return 0;
}