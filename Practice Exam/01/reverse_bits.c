unsigned char	reverse_bits(unsigned char octet)
{
	unsigned int	i;
	unsigned char	res = 0;

	i = 8;
	while (i--)
	{
		// shift all the bits of res by 1 to the left
		// i.e. res: 0000 0101 => 0000 1010
		// perform a bitwise AND on LSB of octet AND 1
		// Least Significant Bit is the right most one
		// i.e octet: 0000 0101 => 1
		// it then performs a bitwise OR between the 
		// two LSB and stores the result in res
		// 0000 1010 | 0000 0001 => res: 0000 1011
		res = (res << 1) | (octet & 1);
		// shifting the original octet by 1 to the right
		// so that in next iteration we have the next bit
		octet = octet >> 1;
	}
	return (res);
}