#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int numero[n];

  for (int i = 0; i < n; i++) {
    numero[i]= i + 1;
    printf("%d\n",numero[i]);

  }

  return 0;
}
