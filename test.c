#include<stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>

#define MAXLINE 1024

int main(void) {
  char buf[MAXLINE];

  printf("prompt: \n");
  while (fgets(buf, MAXLINE, stdin) != NULL){
    if (fprintf(stdout, "Parent: %s", buf) == EOF)
          printf("output err");

    pid_t child = fork();
    switch(child){
      case -1: 
        perror("fork");
        exit(EXIT_FAILURE);
        break;
      case 0:
        printf("Child %d: dying\n", getpid());
        exit(0);
        break;
      default:
        waitpid (child, NULL, 0);
    }
  }
  exit(0);
}
