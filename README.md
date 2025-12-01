# Lab 10 Group G
Lab 10 repo for Tyler and Luke 


## Activity 1
We identified that the correct location on the Pico board to attach the external power supply is VSYS (making sure that when we boot the board via the usb port, we are disconnecting the external power supply)

## Activity 2
We determined the default values for the WAKE_EN, SLEEP_EN, and ENABLE registers:

WAKE_EN:   0x01
SLEEP_EN:  0x01
ENABLE:    0x00


## Activities 3 and 4
Sleep
  Measurements:

  V = 5V

  I = 17.6 mA to 18.9 mA (depending on whether the LED is on or off)

  P = ~ 88mW to 94.5mW


--- 
FreeRTOS Task
  Measurements:

  V = 5V

  I = 20.6 mA to 21.88 mA (depending on whether the LED is on or off)

  P = ~ 103mW to 109.4mW


--- 
Busy Loop
  Measurements:

  V = 5V

  I = 20.4 mA

  P = ~102mW


--- 
GPIO Interrupt Toggle
  Measurements:

  - 1kHz:

  V = 5V

  I = 17.7 mA

  P = 88.5 mW


  - 100kHz:

  V = 5V

  I = 18.96 mA

  P = 94.8 mW


  - 500kHz:

  V = 5V

  I = 20.18 mA

  P = 100.9 mW


  - 1 MHz:

  V = 5V

  I = 20.19 mA

  P = 100.9 mW


--- 
Sleep Demo
  Measurements:

  V = 5V

  I = 1.15 mA (in SLEEP mode) and 17.7 mA (when ON)

  P = 5.75 mW in SLEEP mode


---
Dormant Demo
  Measurements:

  V = 5V

  I = 0.69 mA (in DORMANT mode) and 17.7 mA (when ON)

  P = 3.45 mW in DORMANT mode