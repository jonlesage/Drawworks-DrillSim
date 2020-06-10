#include <stdio.h>
#include "speedLimiter.h"
int main()
{
  double m_lb = 22500*5;
  double spdRef = 1500;
  double spdMeas = 500;
  double height, spdDiff;

  for (height = 0; height <= 48; height++)
  {
    spdDiff = speedLimiter(spdRef,spdMeas,height,m_lb);
    printf("Height: %2.0f feet, Result: %4.2f rpm \n", height,spdDiff);
  }
  return 0;
}
