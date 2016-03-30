#include "iostream"
#include "BlockSample.h"

#define INPUT_FILE "input.txt"


int main () 
{
	BlockSample bs;
	bs.ReadInputFile(INPUT_FILE);
	bs.DumpOutput();
	return 0;
}
