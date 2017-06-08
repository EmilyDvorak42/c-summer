#include <iostream>
#include <fstream>


int main()
{
	std::cout << "What is your age?" << std::endl;
	int age;
	std::cin >> age ;
	std::cout << age << std::endl;
	std::ofstream outputfile;
	outputfile.open("WhatsMyAgeAgain.txt");
	outputfile << age << std::endl;
	outputfile.close();
	return 0;

}

