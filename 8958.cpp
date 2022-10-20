#include<bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a;
    cin>>a;
    int cnt=0;
    int res=0;
    int i;
    char ox[83];
    while(a--){
        cin>>ox;
        for(i=0;i<strlen(ox);i++){
            if(ox[i]=='X'){
                cnt = 0;
            }
            if(ox[i]=='O'){
                cnt++;
            }
                res = res + cnt;
        }
        cout<<res<<'\n';
        cnt = 0;
        res = 0;
    }
    return 0;
}