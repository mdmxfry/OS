#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>

void exer1()
{
    int status;
    int pid;

    pid=fork();

    if(pid<0)
    {
        printf("Error");
        exit(1);
    }
    else if(pid==0)
    {
        printf("Hello from child process my pid is %d",getpid());
        exit(0);
    }
    else
    {
       wait(&status);
        printf("\nHello from parent process my pid is %d \n",getpid());
        exit(1);
    }

}

void exer2()
{
	for(int i = 0; i<3; i++)
	{
		fork();
		sleep(5);
	}

}

void bash()
{
	printf("> ");
}

void read_command(char *command)
{
	scanf("%s", command);
}

void exer3()
{
	char command[10];

	while(0 < 1)
	{
		bash();
		read_command(command);
		system(command);
	}
}

int main()
{
	//exer1();
	//exer2();
	exer3();
	return 0;
}
