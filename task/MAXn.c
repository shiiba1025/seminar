#include <stdio.h>
int main(void){
int a;
printf("1 + 2 + 3 + ... + n < 1000\nFind MAX !!!\n");
while (a*(a+1)/2<1000 && (a+1)*(a+2)/2<=1000)
{a++;};
printf("n=%d\n",a);
}
