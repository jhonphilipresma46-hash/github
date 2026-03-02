#include <stdio.h>

int main()
{
  float arr2[5];
  for (int i = 0; i < 5; i++)
  {
    arr2[i] = (float)i * 2.1;
  }
  printf("%2f\n", arr2[2]);
}