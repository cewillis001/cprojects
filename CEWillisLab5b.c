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
  double total = 0;
  double avg = 0;
  
  printf("Enter the next temperature measurement. \nIf there are no more measurements, enter -999 >");
        scanf("%d", &input);
  
  while(input != -999) {
        
        if(input >= 85)
           ++hot;
        else if (input < 85 && input > 59)
           ++pleasant;
        else
          ++cold;
          
        total = total + input;
          
        printf("Enter the next temperature measurement. \nIf there are no more measurements, enter -999 >");
        scanf("%d", &input);     
  };
  
  printf("\nTotal Hot Days: %d", hot);
  printf("\nTotal Pleasant Days: %d", pleasant);
  printf("\nTotal Cold Days: %d", cold);
  
  if ( (cold + pleasant + hot) != 0){
     avg = total / (cold + pleasant + hot);
     printf("\nAverage temperature: %lf", avg);
     }
  else
    printf("\nNo data was entered.");
         
  return 0;
}
