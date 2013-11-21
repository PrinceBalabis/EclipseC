################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../test/testDegreeFunctions.c \
../test/testDegreeFunctions_Runner.c \
../test/unity.c 

OBJS += \
./test/testDegreeFunctions.o \
./test/testDegreeFunctions_Runner.o \
./test/unity.o 

C_DEPS += \
./test/testDegreeFunctions.d \
./test/testDegreeFunctions_Runner.d \
./test/unity.d 


# Each subdirectory must supply rules for building sources it contributes
test/%.o: ../test/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


