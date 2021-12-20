#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINE_SIZE 81  //Max length of a line with room for terminator
#define MAX_LINES 100
int main(int argc,  char *argv[])
{

	char line[LINE_SIZE];  //Array to capture user's input
	char *p[MAX_LINES];    //Array of pointers.  One pointer per line
	char *pTemp;           //Used to copy string from line to *p[i]
	int numLines;          //Number of lines read
	int length;	       	   //length of line read
	int i,j;

	numLines = 0;
	while (1) {
	/* Code to collect input goes here */
		break; //This line here so stub executes and exits - Delete Me
	}

	for (i=0;  i<numLines;  i++) {
		printf("%s",p[i]);
	}

	/* Code to free memory goes here */

	return 0;
}
