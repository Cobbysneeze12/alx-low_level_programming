#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be flipped to convert
 *             one number into another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The count of bits needed to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m; /* Use Exclusive OR to get differing bits. */

	for (i = 0; i < 64; i++) /* Iterate through all 64 bits of unsigned long int. */
	{
		current = exclusive >> i; /* Shift to the current bit position. */
		if (current & 1) /* Check if the least significant bit is 1 (bit is set). */
		{
			count++; /* Increment the count for differing bits. */
		}
	}

	return (count);
}
