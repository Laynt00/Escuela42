
// Function to swap the four most significant bits (left four bits)
// with the four least significant bits (right four bits) of an 8-bit octet
unsigned char swap_bits(unsigned char octet)
{
// Shift the four most significant bits to the right to the position of the
// four least significant bits, and OR them with the four least significant
// bits shifted to the left to the position of the four most significant bits
    return ((octet >> 4 | octet << 4));
}
