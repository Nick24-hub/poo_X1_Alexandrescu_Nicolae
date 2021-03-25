#pragma once
#include <iostream>
#include "Command.h"
using namespace std;

class count_command : public command
{
public:
	count_command(command_manager& manager);
	void execute(const char** rest_of_arguments, unsigned int arguments_number) override;
	const char* get_name() override;
};