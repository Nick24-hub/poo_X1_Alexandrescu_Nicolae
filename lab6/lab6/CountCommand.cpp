#include "CountCommand.h"

count_command::count_command(command_manager& manager) : command(manager) {}

void count_command::execute(const char** rest_of_arguments, unsigned int arguments_number)
{
	cout << "Counted " << arguments_number << " arguments\n";
}

const char* count_command::get_name()
{
	 return "count"; 
}

