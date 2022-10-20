#include<bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int al=97;
    char word[105];
    cin>>word;
    int alphabet[27]={0};
    int i, j, cnt = 0;
    int res;
    for(i=0;i<26;i++){
        for(j=1;j<=strlen(word);j++){
            if(word[j-1]==al+i){
                if(alphabet[al+i-97]>0){
                    continue;
                }
                alphabet[al+i-97] = j;
            }
        }
    }
    for(i=0;i<26;i++){
        if(alphabet[i]==0){
            cout<<-1<<' ';
        }
        else{
        cout<<alphabet[i]-1<<' ';
        }
        }
    return 0;
}