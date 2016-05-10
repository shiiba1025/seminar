#include<stdio.h>
int main(void){
int n,r;
int n1,n2,r1,r2,k1,k2;
printf("n=");
scanf("%d",&n);
printf("r=");
scanf("%d",&r);
n2=1;
r2=1;
k2=1;
for (n1=n;n1>=1;n1--){
  n2=n2*n1;
}
for (r1=r;r1>=1;r1--){
  r2=r2*r1;
}
for (k1=n-r;k1>=1;k1--){
  k2=k2*k1;
}
printf("nCr=%d\n",n2/r2/k2);
}
