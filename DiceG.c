#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main(){
  printf("What is your name?\n");
  char na[15];
  scanf("%s",na);
  printf("Hello, %s!\n",na);
  
  srand((unsigned int)time(NULL));
  printf("Rolling dice...\n");
  int n1=rand()%6+1;
  printf("Die 1: %d\n",n1);
  int n2=rand()%6+1;
  printf("Die 2: %d\n",n2);
  printf("Total value: %d\n",n1+n2);
  
  if(n1+n2>7){
    printf("You won!\n");
  }
  else{
    printf("You lose!\n");
  }
  return 0;
}
  
