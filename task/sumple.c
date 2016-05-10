#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int number[10];
    int a,b,t,i;

    srand((unsigned)time(NULL));
    //for(i=0;i<10;i++){
     //scanf("%d\n",rand()%60+0);  }

number[0]=rand()%60+0;
number[1]=rand()%60+0;
number[2]=rand()%60+0;
number[3]=rand()%60+0;
number[4]=rand()%60+0;
number[5]=rand()%60+0;
number[6]=rand()%60+0;
number[7]=rand()%60+0;
number[8]=rand()%60+0;
number[9]=rand()%60+0;

    // for(a=0; a<10; a++){
      //scanf("%d",&number[a]);
     for(a=0; a<10; a++){
      for(b=a+1; b<10; b++){
       if(number[a]>number[b]){
        t=number[a];
        number[a]=number[b];
        number[b]=t;
       }
      }
     }
for(a=0; a<10; a++){
      printf("%d\n",number[a]);
    }


int goukei;
goukei=number[0]+number[1];
goukei=goukei+number[2];
goukei=goukei+number[3];
goukei=goukei+number[4];
goukei=goukei+number[5];
goukei=goukei+number[6];
goukei=goukei+number[7];
goukei=goukei+number[8];

printf("%d\n",goukei);

}
