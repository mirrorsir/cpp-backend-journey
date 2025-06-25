#include <iostream>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
using namespace std;

int main()
{
    int ret=open("test.txt",O_CREAT);
    if(ret==-1)
        perror("open error");
    char* buf="Hello,Linux System Programming!";
    ssize_t n=write(ret,buf,sizeof(buf));
    if(n<=0)
        perror("write error");
    close(ret);
}
