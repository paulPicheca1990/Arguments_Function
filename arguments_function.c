#include <stdio.h>

void print(int argc, char *argv[]) {
  printf( "There were %i arguments...\n", argc );

  unsigned int index;
  for( index = 0; index < argc; index++ ) {
    char *value = argv[index];
    printf( "Argument[ %u ] :: %s\n", index, value );
  }
}

int main(int argc, char *argv[]) {
  char *values[2] = { "123", "123" };
  print( 2, values );    
  return 0;
}