#include<bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int high = 0, res = 99999999999, max1 = 0, min1 = 256;
    int n, m, inv, temp, gndtot = 0;
    int gnd[505][505];
    int i, j, k;
    int sum = 0;
    cin>>n>>m>>inv;
    temp = inv;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>gnd[i][j];
            min1 = min(min1, gnd[i][j]);
            max1 = max(max1, gnd[i][j]);
        }
    }
    for(k=min1;k<=max1;k++){
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(k>=gnd[i][j]){
                    inv = inv-(k-gnd[i][j]);
                    sum += k-gnd[i][j];
                }
                else{
                    inv = inv + (abs(k-gnd[i][j]));
                    sum += 2 * abs(k-gnd[i][j]);
                }
            }
        }
        if(inv<0){
            inv = temp;
            sum = 0;
            continue;
        }
        else{
            res = min(res, sum);
            if(res == sum){
            gndtot = max(gndtot, k);
            }
            sum = 0;
            inv = temp;
        }
    }
    cout<<res<<' '<<gndtot;
    return 0;

}