#pragma once
#include <iostream>
#include "Command.h"
#include <time.h>

class time_command : public command
{
public:
    time_command(command_manager& manager);
    void execute(const char** rest_of_arguments, unsigned int arguments_number)override; 
    const char* get_name() override;
};