#include<stdio.h>
const int PAESI = 2;
const int MESE = 12;
int main(){
  int temperatura[PAESI][MESE];
  printf("\nIl numero del MESE corrispondente al calendario.\n");
  printf("\nPAESI: \n1 - GENOVA\t2 - VARAZZE\n");
  printf("\n*******************************************************************\n");

  for(int i = 0; i < PAESI; ++i){
    for (int j = 0; j < MESE; ++j){
      printf("Per paese %d la temperatura del mese %d era: ", i+1, j+1);
      scanf("%d", &temperatura[i][j]);
    }
  }
  printf("\nTabella delle temperature: \n\n");
  printf("\nPAESI: \n1 - GENOVA\t2 - VARAZZE ");
  for (int i = 0; i < PAESI; ++i){
    for(int j = 0; j < MESE; ++j){
      printf("\nPAESE %d, MESE %d - TEMPERTURA: %d", i+1, j+1, temperatura[i][j]);
    }
  }
  printf("\nPAESI: \n1 - GENOVA\t2 - VARAZZE");
  return 0;
}
