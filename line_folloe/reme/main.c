#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);

   if(n%5==0){

    if(n%8!=0){
        if(n%3==0){
            printf("Case1\n");
        }
    }
    if(n%8==0){
        if(n%3==0){
            printf("Case2\n");
        }

        if(n%3!=0){
            printf("Case3\n");
        }
    }
   }

   if(n%5!=0){
    if(n%8!=0){
        if(n%3!=0){
            printf("Case4\n");
        }
    }
    if(n%8== 0){
        if(n%3!=0){
            printf("Case5\n");
        }
    }
   }

   return 0;
}
