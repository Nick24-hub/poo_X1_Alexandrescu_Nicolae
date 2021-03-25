#pragma once
#include <iostream>
#include "Command.h"

using namespace std;

class hello_command : public command
{
public:
	hello_command(command_manager& manager);

	void execute(const char** rest_of_arguments, unsigned int arguments_number) override;
	
	const char* get_name() override;
};