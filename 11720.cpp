#include<bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a;
    int i;
    char n[1000];
    int sum = 0;
    cin>>a;
    for(i=0;i<a;i++){
        cin>>n[i];
        sum += n[i]-48;
    }
    cout<<sum;
    return 0;
}