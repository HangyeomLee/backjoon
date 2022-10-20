#include<bits/stdc++.h>
using namespace std;

int arr[100005];

void solution(int x, int y){
    int start=0,end=0;
    int mid;
    end = y;
    while(end>=start){
        mid = (start+end)/2;
        
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m;
    cin>>n;
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0;i<n;i++){
        cin>>m;
        solution(m, n);
    }


    return 0;
}