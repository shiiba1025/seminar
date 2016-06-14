#include<stdio.h>
#define STACK 10


int stack[STACK];


int main(void){
char ch;

int stack_n;


printf("input a calculating formula.(RPN)\n");
while( (ch = getchar()) != '\n' )

if( ch == '+' ) {
  if( stack_n > 1 ) {
        stack_n--;
      }
      stack[stack_n-1] += stack[stack_n];
      stack[stack_n] = 0;
    }

if( ch == '-' ) {
  if( stack_n > 1 ) {
      stack_n--;

     }
    stack[stack_n-1] -= stack[stack_n];
    stack[stack_n] = 0;
    }

if( ch == '*' ) {
  if( stack_n > 1 ) {
      stack_n--;
     }
    stack[stack_n-1] *= stack[stack_n];
    stack[stack_n] = 0;
  }

if( ch == '/' ) {
  if( stack_n > 1 ) {
       stack_n--;
      }
     stack[stack_n-1] /= stack[stack_n];
     stack[stack_n] = 0;
   }














printf("%d\n",stack[0]);
}
