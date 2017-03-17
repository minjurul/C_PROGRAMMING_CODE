#include<stdio.h>
#include<conio.h>
#include<string.h>

void main() {
   char msg[50];
   char wd,str[10];
   int i = 0, j = 0;
   printf("Enter the word:");
   scanf("%c",&wd);
        msg[50]=wd;


    for(i=0;i<=10;i++){
        printf("%c",msg[i]);
    }

  /* while (msg[i] != '\0') {
      if (msg[i] != ' ') {
         str[j] = msg[i];
         j++;
      } else {
         str[j] = '\0';
         printf("%s", strrev(str));
         printf(" ");
         j = 0;
      }
      i++;
   }

   str[j] = '\0';
   printf("%s", strrev(str)); */

   getch();
}
