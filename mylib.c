#include <stdio.h>
#include <stdlib.h>

int tulis_satu_dimensi();

int tulis_satu_dimensi() {


  int *p;

  p = (int *) calloc(10, sizeof(int));
  
  for(int i=0; i<10; ++i)
    *(p+i) = i;
  for(int i=0; i<10; ++i)
    printf("%d ", *(p+i));
  printf("\n");
  free(p);

  p = (int *) calloc(5, sizeof(int));
  for(int i=4; i>0; --i)
    *(p+i)= i;
  for(int i=0; i<4; ++i)
    printf("%d ", *(p+i));
  printf("\n");
  free(p);

  return 0;
}
