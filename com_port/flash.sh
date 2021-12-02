PROG_PATH="/home/user/Public/STMicroelectronics/STM32Cube/STM32CubeProgrammer/bin/STM32_Programmer_CLI"
PROJECT="blinky"

$PROG_PATH -c port=SWD -w build/$PROJECT.elf