#include <iostream>
#include <fstream>

int main()
{
	int a1[10];
	int* a2 = new int;
	for (int i=0  ; i < 10 ; ++i ){
		a1[i] = 1*i;
	}
	for (int i=0  ; i < 15 ; ++i ){
		a2[i] = 2*i;
	}
	for (int j=0  ; j < 15 ; ++j ){
		std::cout << a1[j] << " " << a2[j] <<"\n";
	}

	delete a1;
	delete a2;
	for (int j=0  ; j < 15 ; ++j ){
		std::cout << a1[j] << " " << a2[j] <<"\n";
	}
	
	return 0;
}

