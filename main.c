#include <stdio.h>


int main (unsigned int argc, char[]* argv) {
  int a = 3;
  if (argc == 0) return 0;
  else {
    for (int i = 0; i < argc; i++) {
      
      printf("%d:, %s\n", i + 1, argv[i]);

  }

  return a;


}
