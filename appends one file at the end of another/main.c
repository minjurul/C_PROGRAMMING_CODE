#include <stdio.h>


int main()
{
	FILE *f1,*f2;
	char c;
	f1=fopen("input.txt","r");
	f2=fopen("output.txt","a");
	while ((c=getc(f1))!=EOF)
	{
	 putc(c,f2);
	}
	fclose(f1);
	fclose(f2);
	printf("\n\tFile appending is complete\n");
	return 0;
}
