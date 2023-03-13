#include <stdio.h>
#include "func.h"

int main(int argc, char const *argv[]) {
  int a = 10;
  int b = 20;
  int c = add(a,b);
  printf("a+b = %d\n", c);/* code */
  return 0;
}
