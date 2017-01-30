#include <stdio.h>
#include <stdlib.h>

const char *flowers[] ={
    "rose", "tulip", "daisy"
    "petunia", "orchid", "lily"
};
int print(){
 int i,choice;
 for( i = 0; i < 25; i++ ){
  choice = rand() % 6;
  printf( "%s\n", flowers[choice] );
 }
 return 0;
}

int main() {
 print();
 return 0;
}
