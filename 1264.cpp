#include<stdio.h>
#include<string.h>
int main()
{
    int i=0;
    int cnt = 0;
    char str[260];
    while(str[i] !='#'){
        scanf("%c",&str[i]);
        if(str[i]=='a'||str[i]=='A'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='U'||str[i]=='u'||str[i]=='o'||str[i]=='O'){
            cnt++;
        }
        if(str[i]=='\n'){
            printf("%d\n",cnt);
            cnt=0;
        }
    }
}