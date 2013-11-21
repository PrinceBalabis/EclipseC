################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/01ArrayInit.c \
../src/02UsingIf.c \
../src/03TypeConversion.c \
../src/04OutOfBounds.c \
../src/05MultipleActions.c \
../src/06Summation.c \
../src/06UsingFunctions.c 

OBJS += \
./src/01ArrayInit.o \
./src/02UsingIf.o \
./src/03TypeConversion.o \
./src/04OutOfBounds.o \
./src/05MultipleActions.o \
./src/06Summation.o \
./src/06UsingFunctions.o 

C_DEPS += \
./src/01ArrayInit.d \
./src/02UsingIf.d \
./src/03TypeConversion.d \
./src/04OutOfBounds.d \
./src/05MultipleActions.d \
./src/06Summation.d \
./src/06UsingFunctions.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


