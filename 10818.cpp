#include<bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int arr;
    int a;
    cin>>a;
    int i;
    int max1 = -9999999, min1=9999999;
    for(i=0;i<a;i++){
        cin>>arr;
        min1 = min(min1,arr);
        max1 = max(max1,arr);
    }
    cout<<min1<<' '<<max1;

    return 0;
}