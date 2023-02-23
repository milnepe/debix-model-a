#include <stdio.h>
#include <stdint.h>

int main(int argc, char **argv) {
  printf("Size of char: %zu\n", sizeof (char));
  printf("Size of int: %zu\n", sizeof (int));
  printf("Size of long int: %zu\n", sizeof (long int));

  return 0;
}

