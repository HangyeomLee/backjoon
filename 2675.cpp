#include<bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a;
    cin>>a;
    while(a--){
        int b;
        char arr[22];
        cin>>b;
        cin>>arr;
        int i,j;
        for(i=0;i<strlen(arr);i++){
            for(j=0;j<b;    j++){
                cout<<arr[i];
            }
        }
        cout<<'\n';
    }
    return 0;
}