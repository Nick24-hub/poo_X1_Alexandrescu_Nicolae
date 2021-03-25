#pragma once
#include "Command.h"

class remove_file : public command
{
public:
	remove_file(command_manager& manager);

	void execute(const char** rest_of_arguments, unsigned int arguments_number) override;

	const char* get_name()override;
};