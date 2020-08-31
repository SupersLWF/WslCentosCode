#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>

//int open(const char *name, int flags);
//int open(const char *name, int flags, mode_t mode);

//both of these two choices to open file are correct.

//when you need to open a new file please use the second one,
//and type the flag "O_CREAT",just like the second eg.    

int main(){
	int fd;

	//1rd eg
	fd = open("./Code1/test.txt",O_RDONLY);
	if (fd==-1)
		printf("file open error!");


	//2nd eg
	fd = open("./Code1/test.txt",				//CONST CHAR*
		  O_CREAT|O_WRONLY|O_TRUNC,			//FLAGS
		  S_IWUSR|S_IRUSR|S_IWGRP|S_IRGRP|S_IROTH);	//MODES

	if (fd==-1)
		printf("file open error!");

	return 0;
}
