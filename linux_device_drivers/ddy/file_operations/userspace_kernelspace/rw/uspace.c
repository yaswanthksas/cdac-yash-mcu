#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

char write_buf[1024];
char read_buf[1024];

int main(){
    int fd;
    fd = open("/dev/yas_df",O_RDWR);
    printf("Enter the name of string\n");
    scanf("%s",write_buf);
    
    write(fd,write_buf,1024);

    read(fd,read_buf,1024);
    printf("%s",read_buf);
    close(fd);
    return 0;
}
