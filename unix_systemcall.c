#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/* chuong tirnh demo read/write file bang thu vien c
 * 
 */
 int main( int argc, char ** argv)
 {
	 printf("start unix system call\n");
	 int fd = open("myfile_unix.txt",O_WRONLY | O_CREAT,0777);
	 if(fd < 0)
	 {
		 printf("error open");
		 return -1;
	 }
	 char buff[40];
	 snprintf(buff,40,"Hello % s %s %s %d \n","we","are","in",2024);
	 write(fd,buff,40);
	 close(fd);
	 return 0;
 }
