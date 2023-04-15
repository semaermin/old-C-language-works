#include <stdio.h>
 
#define SIZE 3       /* SIZE can be changed to play on a wider board */
 
void print_game(void);
int check_status(void);
 
int a[SIZE][SIZE] = {0};
 
int main()
{
   int player, choice, i, j;
   int result;
 
   player = 1;
   while ((result = check_status()) == 0) {
      print_game();
      printf("player: %d, enter your choice: [%d-%d]", player, 1, SIZE * SIZE);
      do {
         scanf("%d", &choice);
         while (getchar() != '\n')   /* clearing the input buffer */
            ;
         j = choice % SIZE - 1;
         i = (choice - j) / SIZE;
         if (choice > SIZE * SIZE || choice <= 0 || a[i][j] != 0) {
            printf("invalid choice, player %d try again: ", player);
            continue;
         }
         else {
            a[i][j] = player;
            break;
         }
      } while(1);
        player = (player == 1) ? 2 : 1;
   }
   print_game();
   if (result == -1)
      printf("Game has finished, no winner.");
   else
      printf("The winner is player %d", result);
   return 0;
}
/******************************************************/
void print_game()
{
   int i, j;
 
   printf("TicTacToe Game\n");
   printf("-----------------------\n");
   for (i = 0; i < SIZE; i++) {
      for (j = 0; j < SIZE; j++)
         if (a[i][j] == 0)
            printf(" . ");
         else if (a[i][j] == 1)
            printf(" O ");
         else
            printf(" X ");
      putchar('\n');
   }
}
/******************************************************
this function may return one of four different values:
1 . player 1 has won.
2 : player 2 has won.
-1: game ends without a winner.
0 : game is continuing.
*******************************************************/
int check_status(void)
{
   int i, j, k;
   int count;
 
   for (k = 1; k < SIZE; k++) {
      for (i = 0; i < SIZE; i++) {         /* check the rows */
         for (j = 0; j < SIZE; j++)
            if (a[i][j] != k)
               break;
         if (j == SIZE)
            return k;          /* return the winner */
      }
      for (j = 0; j < SIZE; j++) {         /* check the columns */
         for (i = 0; i < SIZE; i++)
            if (a[i][j] != k)
               break;
         if (i == SIZE)
            return k;         /* return the winner */
      }
      for (i = 0; i < SIZE; i++)              /* first diagonal */
         if (a[i][i] != k)
            break;
      if (i == SIZE)
         return k;                /* return the winner */
 
      for (i = 0, j = 2; i < SIZE; i++, j--)     /* second diagonal */
         if (a[i][j] != k)
            break;
      if (i == SIZE)
         return k;                               /* return the winner */
   }
   count = 0;
   for (i = 0; i < SIZE; i++)
      for (j = 0; j < SIZE; j++)
         if(a[i][j] != 0)
            count++;
   if (count == SIZE * SIZE)
      return -1;
   return 0;
}
