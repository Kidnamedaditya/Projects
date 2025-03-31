#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int value1 , value2;

void readValues(){
  int num1,num2;
  printf("\nEnter Number 1 : ");
  scanf("%d",&value1);
  printf("\nEnter Number 2 : ");
  scanf("%d",&value2);

  
}

void main(){
  
  int choice;
  printf("\nWelcome to Calculator");
  while(1){
    printf("\n----------------------------");
    printf("\n1.Add  \n2.Subtract  \n3.Divide   \n4.Multiply   \n5.Power   \n6.Square Root   \n7.Mod   \n8.Exit");
    printf("\nEnter your Choice : ");
    scanf("%d",&choice);

    switch(choice){
      case 1 : 
      readValues();
      printf("\nThe sum is %d ",value1+value2);
      break;

      case 2 :
      readValues();
      printf("\nThe difference is %d" ,value1-value2);
      break;

      case 3 :
      readValues();
      printf("\nThe quotient is %d",value1/value2);
      break;

      case 4 :
      readValues();
      printf("\nThe product is %d",value1*value2);
      break;

      case 5 :
      readValues();
      printf("\nThe power is %0.2f",pow(value1,value2));
      break;

      case 6 :
      printf("\nEnter a Number  : ");
      scanf("%d",&value1);
      printf("\nThe square Root is %0.2f",sqrt(value1));
      break;

      case 7 :
      readValues();
      printf("\nThe modulus is %d",value1%value2);
      break;

      case 8 :
      printf("Bye Bye");
      exit(0);
      break;

      default : printf("Enter a Valid choice ! ");
      break;

      
    }
  }
}