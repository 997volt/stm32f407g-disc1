# STM32F4-Discovery blinky

Simple LED blinking project using Makefile as toolchain for STM32F407G-DISC1 board. Created for tools setup and test.

To use code from this project you need:
-   Firmware package in "Drivers" folder (you need to run "Generate code" command in STM32CubeMX after opening blinky.ioc)
-   Build the project code using "make" command in terminal (you need arm-none-eabi-gcc)
-   Connect and program your board running "sh ./flash.sh" command in terminal