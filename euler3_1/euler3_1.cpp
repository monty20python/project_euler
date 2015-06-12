#include <iostream>
#include <cmath>

using namespace std;

int main ()
{

	const long int FACTOR = 6857;

	long int index = 2,
		     factor = 0;

	do
	{
		factor = FACTOR % index;


		if ( factor == 0 )
		{
			cout << index << endl;
		}

		++index;
	} while ( index < FACTOR );

	return EXIT_SUCCESS;
}
