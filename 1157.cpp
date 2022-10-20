#include <stdio.h>
#include <string.h>

char arr[1000005];
int cnt[26];

int main(){
    int max = 0;
    int size;
    char ans;

    scanf("%s",arr);
    size = strlen(arr);

    for(int i=0;i<size;i++)
        if(arr[i]>='a') cnt[arr[i]-'a']++;
        else cnt[arr[i]-'A']++;

    for(int i=0;i<26;i++)
        if(cnt[i]==max){
            ans = '?';
        }
        else if(cnt[i]>max){
            max = cnt[i];
            ans = 'A'+i;
        }

    printf("%c",ans);

    return 0;
}