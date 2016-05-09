#include<stdio.h>
int main(void){
double height,weight,bmi;
printf("please input height in a meter.");
scanf("%lf",&height);
printf("Please input weight in a kilogram.");
scanf("%lf",&weight);
bmi=weight/(height*height);
printf("%.1f\n",bmi);
return 0;
}
