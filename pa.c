#include <stdio.h>
#define _size 8

int main()
{
  double va[_size] = {0.0};
  double vb[_size] = {0.0};
  int ia = 0;
  int ib = 0;
  printf("Please enter eight elements:\n");
  for(ia = 0; ia < _size; ia++) {
    scanf("%lf", &va[ia]);
  }


  vb[0] = va[0];
  for(ib = 1; ib < _size; ib++) {
    vb[ib] = vb[ib - 1] + va[ib];
  }


  for(ia = 0; ia < _size; ia++) {
    printf("%5.2lf", va[ia]);
  }
  printf("\n");
  for(ib = 0; ib < _size; ib++) {
    printf("%7.2lf", vb[ib]);
  }

  return 0;
}
