################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DADC.c \
../DDIO.c \
../HLCD.c \
../SLCD_WriteDecimal.c \
../main.c 

OBJS += \
./DADC.o \
./DDIO.o \
./HLCD.o \
./SLCD_WriteDecimal.o \
./main.o 

C_DEPS += \
./DADC.d \
./DDIO.d \
./HLCD.d \
./SLCD_WriteDecimal.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


