#include <stdio.h>

#define MAXLINES 10
#define MAXCHARS 100

void fileReader(char src[MAXLINES][MAXCHARS], FILE *file, const char filename[]) {
	char line[MAXCHARS];
	if(file != NULL) {
		int n = 0;
		while(fgets(line, MAXLINES, file) != NULL) {  // read a line
			sprintf(src[n], "%s",line);
			n++;
			//fputs(line, stdout); //print to console
		}
		fclose(file);
	}
	else {
		perror(filename); //err msg
	}
}

void removeNoise(){}


int main ( void ) {
   static const char filename[] = "example.c";
	 char src[MAXLINES][MAXCHARS]; /* or other suitable maximum line size */
   FILE *file = fopen(filename, "r");
   fileReader(src, file, filename);
	 for(int i = 0; i < MAXLINES; i++){
		 printf("%s",src[i]);
	 }
}
