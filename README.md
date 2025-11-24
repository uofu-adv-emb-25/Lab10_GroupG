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
1. Sleep
Measurements
V = 5V
I = 17.6 mA to 18.9 mA (depending on whether the LED is on or off)
P = ~0.9-0.1W

1. FreeRTOS task
M.
V = 5V
I = 20.6 mA to 21.88 mA (depending on whether the LED is on or off)
P = ~0.1-0.11W

1. 
M.
V = 5V
I = 20.4 mA
P = ~0.1W



1. 



1. 



1. 
