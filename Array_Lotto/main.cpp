// Through swaw algorithm choose random number
#include <iostream>
#include <time.h>


using namespace std;


int main()
{
	// random number
	srand((unsigned int)time(0));

	int array[45] = {0};

	for (int i = 0; i < 45; ++i)
	{
		array[i] = i+1;
	}

	int iNumber, p1, p2;
	//shuffle algorithm
	for (int i = 0; i < 100; ++i)
	{
		 p1 = rand() % 45;
		 p2 = rand() % 45;

		iNumber = array[p1];
		array[p1] = array[p2];
		array[p2] = iNumber;
	}



	// swap algorithm
	//after swap it and mix it
	

	cout << "LOTTERY TICKET" << endl;
	for (int i = 0; i < 6; ++i)
	{
		cout << " Lotto Number : " << array[i] << endl;
	}


	


	return 0;

}