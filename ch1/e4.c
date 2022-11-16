#include <stdio.h>

void jolly(void);
void deny(void);

int main (void){
  jolly();
  jolly();
  jolly();
  deny();
}

void jolly(void){
  printf("He's a jolly one!\n");
}

void deny(void){
  printf("Nobody can deny that!\n");
}
