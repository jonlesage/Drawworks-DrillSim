#define _USE_MATH_DEFINES
#include <math.h>
double speedLimiter(double spdCmd_rpm, double spdMeas_rpm, double x_feet, double m_lb)
{
  double xTop = 48*0.3048;  // Top Height for Block [m]
  double xBott = 0;         // Bottom Height for Block [m]

  double Pmax = 1500*746;   // Maximum Drive Power [W]
  double Tmax = 8000*1.36;  // Maximum Drive Torque [N-m]

  double Rd = 0.25;         // Drum Radius [m]
  double G = 10;            // Gear Box Ratio
  double Np = 5;            // Number of Pulleys

  double g = 9.81;          // Gravity [m/s^2]
  double Fmax, spdMax, spdMin, vMax, vMin;

  // Convert from US units to SI units
  double spdCmd = spdCmd_rpm*M_PI/30;
  double spdMeas = spdMeas_rpm*M_PI/30;
  double m = m_lb*0.45359237;
  double x = x_feet*0.3048;

  // Compute Maximum Line Force
  Fmax = (G*(Np-1)/Rd)*fmin(Tmax,Pmax/fabs(spdMeas));

  // Maximum Block Velocity
  vMax = 2*g*(x-xTop) - 2*(x-xTop)*Fmax/m;
  if (vMax < 0)
  {
    vMax = 0;
  }
  vMax = sqrt(vMax);

  // Minimum Block Velocity
  vMin = 2*g*(xBott-x) - 2*(xBott-x)*Fmax/m;
  if (vMin < 0)
  {
    vMin = 0;
  }
  vMin = sqrt(vMin);

  // Drive Speed Maximum and Minimum
  spdMax = (G*(Np-1)/Rd)*vMax;
  spdMin = -(G*(Np-1)/Rd)*vMin;

  // Saturate Reference Speed Command
  if (spdCmd_rpm > spdMax)
  {
    spdCmd_rpm = spdMax;
  }
  if (spdCmd_rpm < spdMin)
  {
    spdCmd_rpm = spdMin;
  }
  return spdCmd_rpm;
}
