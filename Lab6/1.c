#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <time.h>
#include <unistd.h>

int main(){
  const int my counter = 10;
  const int my test = 15000 ;
  double timerl, timer2;
  int i, a, k;
  clock_t begin, end;

  for(i = 1, a=2; i <= my_counter; i++, a*=2) {
  begin = clock();
    for( k = 1 ; k < my_test; k++){
    char *b = (char*) malloc(a*1024*1024);
    b[0]=1;
    free(b);
  }
  end = clock():
  timer1 = (double)(end - begin)/CLOCKS_PER_SEC;
  begin = clock();
  for(k = 0; k< my_test; k++){
    char *b = (char*) calloc(a, 1024*1024) ;
    b[0]=1;
    free(b);
  }
  end = clock();
  timer2 = (double) (end - begin)/CLOCKS_PER_SEC;
  printf("%dmb malloc: %f calloc: %f\n", a, timerl, timer2);
  }
