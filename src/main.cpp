#include <iostream>
#include "Config.h"

int main (int argc, char *argv[])
{
    std::cout << "Video Tester. Version " << VERSION_MAJOR << "." << VERSION_MINOR << "." << VERSION_PATCH << std::endl;
	std::cout << "Press any key to quit.";
    std::cin.ignore();
}