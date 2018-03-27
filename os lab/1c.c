#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
int main(int args, char *arg[]){


  if(args<3){
    printf("Invalid arguments\n");
    exit(-1);
  }
  pid_t n = fork();

  if(n<0){
    printf("Process creation unsuccessful");
    exit(-1);
  }
  else if(n>0){
    wait(NULL);
    printf("Child Terminated\n");
    exit(-1);
  }
  else{
    printf("Child Starts\n");
    int result=execlp(arg[1],arg[2],NULL);
	if(result<0){
	printf("Exception occured.\n");
	exit(-1);
  }
}
}
