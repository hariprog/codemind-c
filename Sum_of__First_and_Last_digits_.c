#include<stdio.h>  
 int main()    
{    
int n,sum,l,f;    
scanf("%d",&n);    
l=n%10;
if(n>10 && n<100) {
    f=n/10;
}
else if(n>100 && n<999) {
    f=n/100;
}
else if(n>1000 && n<9999) {
    f=n/1000;
}
else if(n>10000 && n<99999) {
    f=n/10000;
}
else if(n>100000 && n<999999) {
    f=n/100000;
}
else if(n>1000000 && n<9999999) {
    f=n/1000000;
}
sum=l+f;
printf("%d",sum);
}