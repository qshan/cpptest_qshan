################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
OBJS += \
./src/qshan_cpp/practice_cpp.o 

CPP_DEPS += \
./src/qshan_cpp/practice_cpp.d 


# Each subdirectory must supply rules for building sources it contributes
src/qshan_cpp/%.o: ../src/qshan_cpp/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/qshan/workspace-new/cpptest_qshan/src/qshan_cpp" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


