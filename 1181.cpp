#include<bits/stdc++.h>
using namespace std;

struct str{
    int size;
    string arr;
};

bool comp(const str& p1, const str& p2){
    if(p1.size == p2.size){
        return p1.arr < p2.arr;
    }
    else{
        return p1.size < p2.size;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int a;
    cin>>a;
    int i;
    struct str word[20005];
    for(i=0;i<a;i++){
        cin>>word[i].arr;
        word[i].size = word[i].arr.length();
    }  
    sort(word,word+a,comp);
    for(i=0;i<a;i++){
        if(word[i-1].arr==word[i].arr){
            continue;
        }
        cout<<word[i].arr<<'\n';
    }
    return 0;
}