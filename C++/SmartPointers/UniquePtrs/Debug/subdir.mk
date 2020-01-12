################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Account.cpp \
../Accounts_Util.cpp \
../CheckingAccount.cpp \
../PrintableFriend.cpp \
../SavingAccount.cpp \
../TrustAccount.cpp \
../main.cpp 

OBJS += \
./Account.o \
./Accounts_Util.o \
./CheckingAccount.o \
./PrintableFriend.o \
./SavingAccount.o \
./TrustAccount.o \
./main.o 

CPP_DEPS += \
./Account.d \
./Accounts_Util.d \
./CheckingAccount.d \
./PrintableFriend.d \
./SavingAccount.d \
./TrustAccount.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


