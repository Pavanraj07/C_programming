#include<stdio.h>;
#include<fcntl.h>;
#include<sys/stat.h>;
#include<sys/types.h>;
#include<unistd.h>;
int main()
{
int fd;
char buf[1024];
/* create the FIFO (named pipe) */
char * myfifo="/tmp/myfifo";
mkfifo(myfifo,0666);
printf("Run Reader process to read the FIFO File\n");
fd=open(myfifo, O_WRONLY);
write(fd,"Hi",sizeof("Hi"));
/* write "Hi" to the FIFO */
close(fd);
unlink(myfifo); /* remove the FIFO */
return 0;
}
