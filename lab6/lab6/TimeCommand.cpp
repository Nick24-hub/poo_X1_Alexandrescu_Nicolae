#define _CRT_SECURE_NO_WARNINGS
#include "TimeCommand.h"

time_command::time_command(command_manager& manager) : command(manager)
{
}

void time_command::execute(const char** rest_of_arguments, unsigned int arguments_number)
{
	time_t my_time = time(NULL);
	std::cout << ctime(&my_time);
}

const char* time_command::get_name() { return "time"; }
