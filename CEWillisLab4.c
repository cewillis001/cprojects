#include <stdio.h>


int main()
{
  double rsnumber; /* input - character indicating rsnumber */
  char class; /*variable that translates rsnumber into char */
  
  /* Response to question: it can be done with a switch statement
  but only by splitting up the detection of response in an if statement
  and the printing of the results in a switch. It would be more efficient
  to use an if statement with the print included as one of the conditional
  actions. */
  printf("Enter the Richter Scale rating of the earthquake> ");
  scanf("%lf", &rsnumber);
  
  if (rsnumber < 5.0)
     class = 'A';
  else if (rsnumber >= 5.0 && rsnumber < 5.5)
       class = 'B';
  else if (rsnumber >= 5.5 && rsnumber < 6.5)
       class = 'C';
  else if (rsnumber >= 6.5 && rsnumber < 7.5)
       class = 'D';
  else
       class = 'E';
  
  printf("An earthquake with a rating of %lf will result in ", rsnumber);
  
switch (class) {
       case 'A':
            printf("little or no damage.\n");
            break;
       case 'B':
            printf("some damage.\n");
            break;
       case 'C':
            printf("serious damage: walls may crack or fall.\n");
            break;
       case 'D':
            printf("disaster: houses and buildings my collapse\n");
            break;
       case 'E':
            printf("catastrophe: most buildings destroyed.\n");
            break;
       default:
               printf("Unknown\n");
       }
  	
  return 0;
}
