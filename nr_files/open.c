#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
int main(){
	int fd;
	for (int ii=0;ii<1024;ii++){
	
		fd = open("test.sh",O_RDONLY);
		printf("open fd is %d",fd);
	}
	sleep(100000);

	return 0;
}
