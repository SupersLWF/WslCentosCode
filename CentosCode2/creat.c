#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>


//int creat(const char* filename, mode_t mode);
//int open(const char* filename, int flags = O_CREAT|O_WRONLY|O_TRUNC, mode_t mode);


int main(){
	
	int fd;
	fd = creat("./CodeOutPut/test.txt", 0644);
	if (fd==-1)
		printf("creat file(mode_0644) error!");
	
	return 0;
}
