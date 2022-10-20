#include<bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,i,j = 0;
    int cnt = 0;
    int prime[1005] = {0};
    int primenumber[105];
    cin>>n;
    for(i=2;i<1000;i++){
        if(prime[i]==0){
            primenumber[j]=i;
            j++;
        }
        
    }

    return 0;
}