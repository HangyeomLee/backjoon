int ncr(int x,int y){
    int res=1;
    int cnt=1;
    int i;
    for(i=y-x+1;i<=y;i++){
        res = res * i;
        if(cnt<=x){
            res = res / cnt;
            cnt++;
        }
    }
    
    return res;
}

int main()
{
    int a;
    int n,m;
    int ans;
    scanf("%d",&a);
    int i;
    for(i=0;i<a;i++){
        scanf("%d %d",&n,&m);
        ans = ncr(n,m);
        printf("%d", ans);
        printf("\n");
    }
}
