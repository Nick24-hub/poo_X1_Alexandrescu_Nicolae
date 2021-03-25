#include "HelloCommand.h"

hello_command::hello_command(command_manager& manager) : command(manager) {}

void hello_command::execute(const char** rest_of_arguments, unsigned int arguments_number)
{
	cout << "Hello" << " ";
	if (arguments_number > 0)
	{
		for (int i = 0; i < arguments_number; i++)
			cout << rest_of_arguments[i] << ' ';
	}
	cout << '\n';
}

const char* hello_command::get_name()
{
	return "hello";
}

