#pragma once
#include "Command.h"

class create_file : public command
{
public:
	create_file(command_manager& manager);

	void execute(const char** rest_of_arguments, unsigned int arguments_number) override;
	
	const char* get_name()override;
};