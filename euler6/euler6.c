#include "stdio.h"
#include "math.h"

int main()
{
	int sum_squares = 0, square_sum = 0, difference = 0;

	for(int i = 1; i <= 100; ++i)
		sum_squares += pow(i, 2);

	square_sum =  (100 * 101) / 2;
	square_sum = pow(square_sum, 2);

	difference = square_sum - sum_squares;

	printf( "%d sum_squares: %d square_sum: %d \n", difference, sum_squares, square_sum );
}