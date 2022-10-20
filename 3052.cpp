#include<bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    int i;
    int cnt = 0;
    int remain[42] = { 0 };
    for(i=0;i<10;i++){
        cin>>n;
        remain[n%42]++;
    }
    for(i=0;i<42;i++){
        if(remain[i]!=0){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}