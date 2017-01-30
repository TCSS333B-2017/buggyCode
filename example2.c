#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  char *a=malloc(50000);
  memset(a,50000,1);
  free(a);
  char *b=malloc(10);
  strcat(b,"hello"); 
  printf("%s\n",b);
  free(b);
 return 0;
}
