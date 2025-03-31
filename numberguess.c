#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int genNum(int range){
    int random = rand()%(range+1);
    return random;

}

int main(){
  srand(time(0));
  printf("Welcome to Number Guessing Game");
  int range,n,count=0; //user input and number of attempts
  printf("\nEnter the upper range : ");
  scanf("%d",&range);
  int x = genNum(range);  //random generated number

  while(1){
    printf("\nEnter your guess : ");
    scanf("%d",&n);

    if(n==x){
      printf("\nYou guessed correct !!");
      printf("\nYou guessed in %d tries",++count);
      printf("\nThanks for playing");
      exit(0);
    }

    else{

      printf("\nYou guessed wrong");

      if(n>x){
        printf("\nGuess a bit lower");
        count ++;
      }
      else{
        printf("\nGuess a bit higher");
        count ++;
      }
        

    }
  }

  return 0;

}