#include <stdio.h>
#include <string.h>
int main() {
	char text[100];
	int begin, middle, end, length = 0;
	printf("ENTER A STRING: ");
	gets(text);
	while ( text[length] != '\0' )
	      length++;
	end = length - 1;
	middle = length/2;
	for ( begin = 0 ; begin < middle ; begin++ ) {
		if ( text[begin] != text[end] ) {
			 printf("\nTHE STRING IS NOT PALINDROM\n");
			break;
		}
		end--;
	}
	if( begin == middle )
	      printf("\nTHE STRING IS PALINDROM\n");
	return 0;
}
