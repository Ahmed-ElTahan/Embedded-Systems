################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DDIO.c \
../HKPD.c \
../HLCD.c \
../HSeven_Segment_DDIO.c \
../SCompareArryas.c \
../main.c 

OBJS += \
./DDIO.o \
./HKPD.o \
./HLCD.o \
./HSeven_Segment_DDIO.o \
./SCompareArryas.o \
./main.o 

C_DEPS += \
./DDIO.d \
./HKPD.d \
./HLCD.d \
./HSeven_Segment_DDIO.d \
./SCompareArryas.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

