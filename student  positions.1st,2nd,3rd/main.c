#include<stdio.h>
#include<conio.h>
#include<string.h>

struct person
{
		char name[10];
		int rno;
};
typedef struct person NAME;
NAME  stud[10], temp[10];

int main()
{
	 int no,i;

	 void sort(int N); 	/* Function declaration */


	 fflush(stdin);

	 printf("Enter the number of students in the list\n");
	 scanf("%d",&no);

	 for(i = 0; i < no; i++)
	 {
		 printf("\nEnter the name of  person %d : ", i+1);
		 fflush(stdin);
		 gets(stud[i].name);

		 printf("Enter the roll number of %d : ", i+1);
		 scanf("%d",&stud[i].rno);
		 temp[i] = stud[i];
	 }

	 printf("\n*****************************\n");
	 printf ("     Names before sorting     \n");
	 /* Print the list of names before sorting */
	 for(i=0;i<no;i++)
	 {
			printf("%-10s\t%3d\n",temp[i].name,temp[i].rno);
	 }

	 sort(no);       /* Function call */

	 printf("\n*****************************\n");
	 printf ("     Names after sorting     \n");
	 printf("\n*****************************\n");
	 /* Display the sorted names */
	 for(i=0;i<no;i++)
	 {
			printf("%-10s\t%3d\n",stud[i].name,stud[i].rno);

	 }
	 printf("\n*****************************\n");
	 return 0;

}          /* End of main() */

/* Function to sort the given names */
void sort(int N)
{
		 int i,j;
		 NAME temp;

		 for(i = 0; i < N-1;i++)
		 {
				for(j = i+1; j < N; j++)
				{
					if(strcmp(stud[i].name,stud[j].name) > 0 )
					{
						temp    = stud[i];
						stud[i] = stud[j];
						stud[j] = temp;
					}
				}
		 }
}
