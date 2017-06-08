#include <iostream>
#include <fstream>

int main()
{
	
	std::ifstream infile("data.dat");

	std::string content;
	int counter1 = 0;	
	int counter2 = 0;	
	while(infile >> content) {
		if ((counter1 == 3) && (counter2 < 3)){
			if (counter2 == 0)
				std::cout << "Number of Rows " << content<< "\n";
			if (counter2 == 1)
				std::cout << "Number of Columns " << content<< "\n";
			if (counter2 == 2)
				std::cout << "Number of NonZeros " << content<< "\n";
			counter2 +=1;
	
		}
		if (content == "%"){
			counter1 += 1;
		}
	}


	return 0;
}

