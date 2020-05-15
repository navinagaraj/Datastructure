/***************************************/
/* Author	:Naveenkumar N         */
/* Date		:13-05-2020            */
/* Filename	:ds_back_up.c          */
/* Description	:ds_back_up            */
/***************************************/


#include "ds_back_up.h"


struct database my_data;
char buffer[50];
char buffer_1[30]="Naveenkumar22\n";
char buffer_2[30]="sugumaran22\n";
char buffer_3[30]="jeevanandham22\n";

int main(){

	int open_fd;
	ssize_t read_size, write_size, lseek_point;

	open_fd = open("./data_read.txt", O_CREAT|O_RDWR|O_APPEND,0644);

/*	write_size = write(open_fd, buffer_1 ,strlen(buffer_1));
	perror("write");
	write_size = write(open_fd, buffer_2 ,strlen(buffer_2));
	perror("write");
	write_size = write(open_fd, buffer_3 ,strlen(buffer_3));
	perror("write");*/


//	open_fd = open("./data_read.txt",O_RDWR);
//	lseek_point = lseek(open_fd, 0, SEEK_CUR );
	read_size =  read(open_fd, &buffer, 14);
	perror("read");
	printf("%s\n",buffer);

//	open_fd = open("./data_read.txt",O_RDWR);
//	lseek_point = lseek(open_fd, 0, SEEK_SET );
	read_size =  read(open_fd, &buffer, 14);
	perror("read");
	printf("%s\n",buffer);

	read_size =  read(open_fd, &buffer, 15);
	perror("read");
	printf("%s\n",buffer);
	
}
