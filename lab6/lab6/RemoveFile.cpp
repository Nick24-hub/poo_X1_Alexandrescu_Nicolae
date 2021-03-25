#include "RemoveFile.h"
#include <fstream>
using namespace std;

remove_file::remove_file(command_manager& manager) : command(manager)
{
}

void remove_file::execute(const char** rest_of_arguments, unsigned int arguments_number)
{
	remove(rest_of_arguments[0]);
}

const char* remove_file::get_name()
{
	return "remove";
}
