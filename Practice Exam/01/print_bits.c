#include <unistd.h>

void print_bits(unsigned char octet)
{
    int i = 8; // Initialize a counter variable i to 8
    unsigned char res = 0; 

    while (i--) // Loop through each bit of octet
    {
        res = (octet >> i & 1) + 48; // Shift the bit of octet to the right i times and use the bitwise AND operator with 1 to get the bit value. Then add 48 to convert the bit value to its ASCII representation ('0' or '1')
        write (1, &res, 1); // Write the ASCII representation of the bit to the standard output (stdout)
    }
}


/* if you want to test your code : */
int main()
{
	unsigned char octet = 22;
	print_bits(octet);
}