#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;
	
	printf("before fork\n");

	fork();

	if(pid == -1)
	{
		perror("Failed\n");
		return 1;
	}
	printf("it's a two\n");
	return 0;

}
