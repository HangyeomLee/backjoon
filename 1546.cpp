#include<stdio.h>
int main(){
    int a;
    int arr[1001];
    int i;
    int max = 0;
    float sum,res;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    for(i=0;i<a;i++){
        sum+=(float)arr[i]/max*100;
    }
    printf("%f",sum/a);
}