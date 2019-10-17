#include <stdio.h>

#define PI 3.1415926f


int main(void)
{
  int r = 10;
  float volume;

  volume = 4.0f / 3.0f * PI * r * r * r;
  printf("Volume is %.2f\n", volume);
}