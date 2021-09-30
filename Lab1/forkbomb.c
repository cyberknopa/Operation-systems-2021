#include <unistd.h>
#include <stdlib.h>

int main (void){
  while(1){
    sleep(1);
    fork();
    sleep(1)
  }
}
