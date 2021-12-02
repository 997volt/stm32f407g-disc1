# STM32F4-Discovery COM port

Project to test Virtual COM port on STM32F407G-DISC1 board.

To use code from this project you need:
-   Firmware package in "Drivers", "Middlewares" and "USB_DEVICE" folders (you need to run "Generate code" command in STM32CubeMX after opening com_port.ioc)
-   Build the project code using "make" command in terminal (you need arm-none-eabi-gcc)
-   Connect and program your board running "sh ./flash.sh" command in terminal