#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
  int a=3,b=2;
  pid_t n=fork();
  if(n<0)
    printf("the creation of child is unsuccessful\n");
  else if(n==0)
    printf("%d ,the child process id = %d, the parent process id = %d \n",a+b,getpid(),getppid());
  else
    printf("%d ,the child process id = %d, the shell process id = %d \n",a*b,getpid(),getppid());


}
