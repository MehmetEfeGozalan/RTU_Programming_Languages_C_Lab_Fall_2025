
#include <stdio.h>

int main(int argc, char *argv[]) {
  // This one is my new comment line 
  // This is your first C program my friend
  printf("Hello, RTU World from C Lab in 3136!\n");
  printf("You passed %d argument(s).\n", argc - 1);
  for (int i = 1; i < argc; ++i) {
    printf("  arg[%d] = %s\n", i, argv[i]);
  }
  return 0;
}
