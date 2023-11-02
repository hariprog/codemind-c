 #include<stdio.h>
int main() {
    int n,x,y,i,a,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d %d",&x,&y);
    for(a=x;a<=y;a++) {
        if(a%10==2 || a%10==3 || a%10==9) 
        count++;
    }
        printf("%d
",count);
        count=0;
    }
}