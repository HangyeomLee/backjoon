#include<stdio.h>
int main()
{
    int a, tot;
    int i,j,k;
    int max=0;
    int arr[200];
    scanf("%d %d",&a,&tot);
    for(i=0;i<a;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<a;i++){
        for(j=0;j<i;j++){
            for(k=0;k<j;k++){
                if(arr[i]+arr[j]+arr[k]<=tot&&max<arr[i]+arr[j]+arr[k]){
                    max = arr[i]+arr[j]+arr[k];
                }
            }
        }
    }
    printf("%d",max);
}