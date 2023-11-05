#include <stdio.h>
#include <stdlib.h>

int main()
{
    int values[10];

  printf("Enter 10 integers:\n ");

  for(int i = 0; i < 10; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers:\n ");
  for(int i = 0; i < 10; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
}
