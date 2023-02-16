#include <stdio.h>
#include <string.h>

char Text[21];

int main(void) {
  
  printf("Zadejte libovolné slovo:\n");
  scanf("%s", Text);

  int len = strlen(Text);
  
  printf("První znak: %c\n", Text[0]);
  printf("Druhý znak: %s",Text + len - 1);
  
  return 0;
}