################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Polygon.cpp \
../src/cgal.cpp \
../src/example.cpp 

OBJS += \
./src/Polygon.o \
./src/cgal.o \
./src/example.o 

CPP_DEPS += \
./src/Polygon.d \
./src/cgal.d \
./src/example.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I/home/ujjval/Downloads/CGAL-4.13-beta1 -I/usr/include/CGAL/GMP -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -std=gnu++11 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


