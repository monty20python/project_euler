/* If we list all the natural numbers below 10 that are multiples
   of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
   Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>

using namespace std;

int main ()
{
    const int THREE = 3,
    	      FIVE = 5,
    	      THOUS = 1000;

    int sum = 0;

    for ( int i = 10; i < THOUS; i++ )
    {
    	if ( i % THREE == 0)
    		sum = sum + i;
        else if ( i % FIVE == 0 )
        	sum = sum + i;
    }

    sum = sum + 23;

    cout << sum;

	return EXIT_SUCCESS;
}
