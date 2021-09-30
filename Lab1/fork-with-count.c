#include <unistd.h>
#include <stdlib.h>

int main (void){
  while(1){
    sleep(1);
    system("ps aux | wc -l >> /home/kali/test1.txt");
  }
}
