#include <stdio.h>
#include <stdlib.h>

/* chuong tirnh demo read/write file bang thu vien c
 * 
 */
 int main( int argc, char ** argv)
 {
	 printf("start \n");
	 FILE *file;
	 file = fopen("myfile.txt","w");
	 if(file == NULL)
	 {
		 printf("error open");
		 return -1;
	 }
	 fprintf(file,"Hello % s %s %s %d \n","we","are","in",2024);
	 fclose(file);
 }
