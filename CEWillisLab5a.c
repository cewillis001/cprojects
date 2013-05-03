/* categories: hot (temp >= 85), pleasant (temp < 85 && > 59 ), cold (temp <= 59)
 For each loop where the sentinel character is not used, prompt user to input data, read data, 
 check to see which category the data falls into,
 increment the counter for that category OR complete loop. When sentinel character is 
 detected, print the labels and current counters for each category.*/

#include <stdio.h>

int 
main(void)
{
  int input = 0;
  int hot = 0;
  int pleasant = 0;
  int cold = 0;
  
  do {
        
        printf("Enter the next temperature measurement. \nIf there are no more measurements, enter -999 >");
        scanf("%d", &input);
        
        if(input == -999)
           break;
        else if(input >= 85)
           ++hot;
        else if (input < 85 && input > 59)
           ++pleasant;
        else
          ++cold;
        
  } while(input != -999);
  
  printf("\nTotal Hot Days: %d", hot);
  printf("\nTotal Pleasant Days: %d", pleasant);
  printf("\nTotal Cold Days: %d", cold);
  
  /*int sum = 0,
  score,
  input_status;
  
  printf("Scores\n");
  
  input_status = scanf("%d", &score);
  while (input_status != EOF) {
        printf("%5\n", score);
        sum += score;
        input_status = scanf("%d", &score);
  }
        
  printf("\nSum of exam scores is %d\n", sum);
  */        
  return 0;
}
