#include <stdio.h>
#include <stdlib.h>

int main()
{
  /* Goal: make a tool to assist in playing Mobile Frame Zero, a table top
  game by by Vincent Baker and Joshua A.C. Newman. The app will focus on the 
  number of dice used to represent the Mobile Frame. */
  
  /*  */
  
  /* Step one: data entry. The users enter the information about their Mobile
  Frames. This information is entered into an array for each Frame.
  The information is: [0] # White Dice, [1] # defensive system
  (blue dice), [2] # movement systems (green dice), [3] # surveil/comm system 
  (yellow), # hand-to-hand range (red) ([4] d6, [5] d8), # direct range (red) 
  ([6] d6, [7] d8), # artillery range (red) ( [8] d6, [9] d8), [10] # single shot 
  rockets (red) (not a system), [11] # movement bonus (green) (not a system) */
  
  /* initialize array for the attacking Mobile Frame*/  
  int attacker[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,}; 
  int i;
  
  printf("\nHow many white dice does the attacking Mobile Frame have left? [1-2]\n");
  scanf("%d", &attacker[0]);
  printf("%d white dice\n", attacker[0]);
  
  do{
     
     /* menu allowing user to choose their data entry*/
     
     printf("\nType the number that corresponds with one of the systems remaining \n");
     printf("on your Mobile Frame; no more than 4 total.\n");
     printf("1 Defensive Systems (blue dice)\n");/*goes in subscript 1*/
     printf("2 Movement Systems (green dice)\n");/*goes in subscript 2*/
     printf("3 Surveillance/Communication Systems (yellow dice)\n");/*goes in subscript 3*/
     printf("4 Hand-to-Hand Range Attack Systems (red dice)\n");/*goes in subscript 4 and 5*/
     printf("5 Direct Fire Range Attack Systems (red dice)\n");/*goes in subscript 6 and 7*/
     printf("6 Artillery Range Attack Systems (red dice)\n");/*goes in subscript 8 and 9*/
     printf("7 Single Shot Rockets (red dice)\n");/*goes in subscript 10*/
     /*subscript 11 holds info about the bonus movment die*/
     printf("Type -1 when you are finished entering all information.\n");
     scanf("%d", &i);
     
     if ((attacker[1] + attacker[2] + attacker[3] + attacker[4] + attacker[5] +
     attacker[6] + attacker[7] + attacker[8] + attacker[9]) > 4){
        printf("Error: A Mobile Frame may not have more than 4 systems. Please\n");
        printf("select the erroneous system again and adjust the number.\n");
     }/*  Checks the 4 system rule */
     
     if (i == 1){
         printf("Enter the number of Defensive Systems currently remaining to the \n");
         printf("Mobile Frame (0-2): \n");
         scanf("%d", &attacker[1]);
         printf("%d blue dice\n", attacker[1]);
         }/* option 1 */
         
     else if (i == 2){
         printf("Enter the number of Movement Systems currently remaining to the \n");
         printf("Mobile Frame (0-2): \n");
         scanf("%d", &attacker[2]);
         printf("%d green dice\n", attacker[2]);
         }/* option 2 */
     
     else if (i == 3){
         printf("Enter the number of Surveillance/Communication Systems currently\n");
         printf("remaining to the Mobile Frame (0-2): \n");
         scanf("%d", &attacker[3]);
         printf("%d yellow dice\n", attacker[3]);
         }/* option 3 */
     
     else if (i == 4){
         printf("Enter the number of Hand-to-Hand Attack Systems currently \n");
         printf("remaining to the Mobile Frame (0-2): \n");
         scanf("%d", &attacker[4]);
         
         if (attacker[4] == 2){
            attacker[4] = 1;
            attacker[5] = 1;
            }
         
         printf("%d red dice, %d red d8\n", attacker[4], attacker[5]);
         }/* option 4 */
         
     else if (i == 5){
         printf("Enter the number of Direct Fire Attack Systems currently \n");
         printf("remaining to the Mobile Frame (0-2): \n");
         scanf("%d", &attacker[6]);
         
         if (attacker[6] == 2){
            attacker[6] = 1;
            attacker[7] = 1;
            }
         
         printf("%d red dice, %d red d8\n", attacker[6], attacker[7]);
         }/* option 5 */
         
     else if (i == 6){
         printf("Enter the number of Artillery Fire Attack Systems currently \n");
         printf("remaining to the Mobile Frame (0-2): \n");
         scanf("%d", &attacker[8]);
         
         if (attacker[8] == 2){
            attacker[8] = 1;
            attacker[9] = 1;
            }
         
         printf("%d red dice, %d red d8\n", attacker[8], attacker[9]);
         }/* option 6 */
     
     else if (i == 7){
         printf("Enter the number of Single Shot Rockets currently remaining to\n");
         printf("the Mobile Frame (0-2): \n");
         scanf("%d", &attacker[10]);
         printf("%d red d8\n", attacker[10]);
         }/* option 7; this does not count as a ranged weapon for the movement bonus */
             
  }while(i != -1);
  
  if ((attacker[6] + attacker[7] + attacker[8] + attacker[9]) == 0){
     attacker[11] = 1;
     printf("Due to the Frame's lack of ranged weapons, you got 1 bonus movement\n");
     printf("die, a green d8.\n");
     }/* automatically handles the bonus movement die after all systems entered*/
  
  /* Displays totals */  
  printf("The total dice remaining for this Mobile Frame are: \n");
  printf("%d white dice\n", attacker[0]);
  if(attacker[1] != 0)
     printf("%d blue dice\n", attacker[1]);
  if(attacker[2] != 0)
     printf("%d green dice\n", attacker[2]);
  if(attacker[11] != 0)
     printf("%d green d8\n", attacker[11]);
  if(attacker[3] != 0)
     printf("%d yellow dice\n", attacker[3]);
  if(attacker[4] != 0)
     printf("hand to hand: %d red dice\n", attacker[4]);
  if(attacker[5] != 0)
     printf("hand to hand: %d red d8\n", attacker[5]);
  if(attacker[6] != 0)
     printf("direct fire: %d red dice\n", attacker[6]);
  if(attacker[7] != 0)
     printf("direct fire: %d red d8\n", attacker[7]);
  if(attacker[8] != 0)
     printf("artillery range: %d red dice\n", attacker[8]);
  if(attacker[9] != 0)
     printf("artillery range: %d red d8\n", attacker[9]);
  if(attacker[10] != 0)
     printf("single shot rocket: %d red d8\n", attacker[10]);
     
  
  system("PAUSE");	
  return 0;
}/* end of main */
