#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void function(){
  pid_t n=fork();
  if(n==0){
  for(int i=2;i<=20;i+=2)
    printf("%d ",i);
  printf("\n");
  printf("pid of child = %d and pid of parent = %d\n",getpid(),getppid());


  }

else if(n>0){
  for(int i=3;i<=21;i+=2){
    printf("%d ",i);

  }
  printf("\n");
  printf("pid of child = %d and pid of parent = %d\n",getpid(),getppid() );
}
}

int main(){
  function();
  return 0;
}
