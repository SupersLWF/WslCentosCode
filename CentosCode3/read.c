#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

//ssize_t read(int fd, void *buf, size_t len);

int main(){
	unsigned long word;
	ssize_t nr;

	//以只读方式打开文件，并读取了64位二进制数据
	int fd;

	fd = open("Readed", O_RDONLY);
	if(fd == -1)
		perror("open()");

	nr = read(fd, &word, sizeof(unsigned long));
	if(nr == -1)
		perror("read()");
	printf("%d ",fd);

	printf("%x ",word);

	close(fd);

	//以只读方式打开文件，以追加模式打开文件，非阻塞模式，可继续读取文件尾之后的内容
	fd = open("Readed", O_RDONLY|O_APPEND|O_NONBLOCK);
	if (fd == -1)
		perror("open()");

	nr = read(fd, &word, sizeof(unsigned long));
	if (nr == -1)
		perror("read()");
	//printf("%d",fd);
	printf("%d ", nr);

	printf("%x ", word);

	close(fd);



}

