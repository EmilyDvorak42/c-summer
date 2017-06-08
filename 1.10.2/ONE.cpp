#include <iostream>
#include <fstream>

const int z =14;

int main()
{
	char* a1;	
	char* a2 = new char[10];	

	int b1[10];
	int b2[10] = {0,1,2,3,4,5,6,7,8,9};

	int* c1;
	int* c2 = new int[10];

	char* D1[4];

	char d2a[5] = "Zora";
	char d2b[3] = "is";
	char d2c[2] = "a";
	char d2d[4] = "cat";

	char* D2[4] = {d2a,d2b,d2c,d2d};

	char* e1A;
	char* e1B = e1A;

	char* e2A = new char;
	char* e2B = e2A;

	const int f = 42;

 	const int*  g1;
 	const int*  g2 = new int;

	const int* h1;
	const int* h2 = new int;


	return 0;

}

