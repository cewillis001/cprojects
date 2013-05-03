#include <stdio.h>
#include <stdlib.h>

void atm(double money); /*prototype*/

int main()
{
  double cash;
  printf("How much would you like to withdraw?\n(Must be a multiple of $10)\n");
  scanf("%lf", &cash);
    
  atm(cash);
  	
  return 0;
}

void atm(double money) /* establishes money variable as input */
{
  int fifties, twenties, tens; /*declare local vars. Used integers to get remainders */

  fifties = 0;
  twenties = 0;
  tens = 0;
  
  if (money >= 50){
            fifties = money/50;
            money = money - (fifties*50);
            }
  if (money < 50 && money >= 20){
            twenties = money/20;
            money = money - (twenties*20);
            }
  if (money < 20 && money >= 10){
            tens = money/10;
            money = money - (tens*10);
            }
  
  if (money != 0){
            printf("You will be short $%5.2lf, since you did not enter a multiple of $10.\n", money);
            }
printf("Please take your bills. Expect %.2d fifties, %.2d twenties, and %.2d tens.\n",
       fifties, twenties, tens); 
 /*output of function, please take your bills. Expect
  x many 50s, x many 20s, and x many 10s*/
}
