################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ADC.c \
../DC_Motor.c \
../GPIO.c \
../LCD.c \
../Main.c \
../PWM.c \
../lm35_sensor.c 

OBJS += \
./ADC.o \
./DC_Motor.o \
./GPIO.o \
./LCD.o \
./Main.o \
./PWM.o \
./lm35_sensor.o 

C_DEPS += \
./ADC.d \
./DC_Motor.d \
./GPIO.d \
./LCD.d \
./Main.d \
./PWM.d \
./lm35_sensor.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


