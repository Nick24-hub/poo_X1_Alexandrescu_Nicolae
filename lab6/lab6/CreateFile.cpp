#include "CreateFile.h"
#include <fstream>
using namespace std;

create_file::create_file(command_manager& manager): command(manager) {}

void create_file::execute(const char** rest_of_arguments, unsigned int arguments_number)
{
	fstream file(rest_of_arguments[0]);
}

const char* create_file::get_name()
{
	return "file";
}