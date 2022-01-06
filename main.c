#include <stdio.h>


int main (unsigned int argc, char* argv[]) {
    int a = 3;
    if (argc == 0) return 0;
    else {
        printf("argc: %d\n", argc);
        for (int i = 1; i < argc; i++) {
      
            printf("%d:, %s\n", i, argv[i]);
        }
    }

    return a;

}
