#pragma config(Sensor, S1,     HTSMUX,              sensorI2CCustom)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "drivers/hitechnic-sensormux.h"
#include "drivers/lego-touch.h"


const tMUXSensor LEGOTOUCH = msensor_S1_1;

task main() {
  nxtDisplayCenteredTextLine(0, "Lego");
  nxtDisplayCenteredBigTextLine(1, "TOUCH");
  nxtDisplayCenteredTextLine(3, "SMUX Test");
  nxtDisplayCenteredTextLine(5, "Connect SMUX to");
  nxtDisplayCenteredTextLine(6, "S1 and sensor to");
  nxtDisplayCenteredTextLine(7, "SMUX Port 1");
  wait1Msec(2000);

  eraseDisplay();

  while (true) {
    // Check if the sensor is pressed or not.
    if (TSreadState(LEGOTOUCH))
      nxtDisplayCenteredBigTextLine(3, "ACTIVE");
    else
      nxtDisplayCenteredBigTextLine(3, "INACTIVE");
    wait1Msec(50);
  }
}
