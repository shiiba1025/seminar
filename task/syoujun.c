#include<stdio.h>
int main(void){
int a,b,t;
int number[3];
printf("Input three numbers you like. \n");
for(a=0; a<3; a++)
 scanf("%d",&number[a]);
for(a=0; a<3; a++){
 for(b=a+1; b<3; b++){
  if(number[a]>number[b]){
   t=number[a];
   number[a]=number[b];
   number[b]=t;
  }
 }
}
printf("syoujun completed!\n");
for(a=0; a<3; a++){
 printf("%d\n",number[a]);

}
return 0;
}
