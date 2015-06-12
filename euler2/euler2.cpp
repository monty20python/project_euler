#include <iostream>

using namespace std;

int main ()
{
    int sum = 0,
    	n1 = 0,
    	n2 = 1,
    	n3;

    do
    {
    	n3 = n1 + n2;
    	n1 = n2;
    	n2 = n3;

    	if ( n2 % 2 == 0 )
    		sum += n2;
    } while ( n2 <= 4000000 );

    cout << sum;

	return EXIT_SUCCESS;
}

