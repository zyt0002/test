#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
void main(){
	int A;
	A = fork();
	if (A==0){
		printf("this is from child process");
	execlp("/bin/ls","ls",NULL);
	}else{
	       printf("this is from parent process\n");
       int pid = wait(&status);
	printf("Child %d completes",pid);
	}
	printf("process ends %d\n",A);
}	
