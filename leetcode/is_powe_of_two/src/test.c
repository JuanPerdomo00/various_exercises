#include <stdio.h>

int isPowerOfTwo(int x) {
  // x = 10
  // 10 > 10 && (10(00000101) & (10 - 1) == (9(00001001))
  //
  // 0 0 0 0 0 1 0 1
  // 0 0 0 0 1 0 0 1 &
  //------------------
  // 0 0 0 0 0 0 0 1
  //
  //
	//
	// x = 16777215
	// xbin = 111111111111111111111111
	// x > 10 && (x & (x - 1) == 0)
	//
	//	1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
	//	1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 0
	//---------------------------------------------------
	//	1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 0
	//
	//
	//
	//
	//	x = 16
	//	xbin = 00010000
	//
	//
	//	0 0 0 1 0 0 0 0
	//	0 0 0 0 1 1 1 1
	//--------------------
	//	0	0	0	0	0	0	0	0
	//
  return x > 0 && (x & (x - 1)) == 0;
}

int main() {
  int number = 10;

  //		0  0  0  0 1 0 1  0 // 10 => 00000101
  //  128 64 32 16 8 4 2  1
  //
  //  0 0 0 0 1 0 0 1  // 9 => 00001001

  if (isPowerOfTwo(number)) {
    printf("%d is pow of two\n", number);
  } else {
    printf("%d no is pow of two\n", number);
  }

  int numberTwo = 16777215;
  // 0  0    0  0   0  0  0  0
  // 256	128 32	16  8  4  2  1
  //
  // (1  1  1  1  1  1  1  1) (1 1 1 1 1 1 1 1) (1 1 1 1 1 1 1 1) // 3 bytes
  // 128 64 32 16	8	 4	2	 1	 ...............   ................ 266 ** 2 = 16777215
  if (isPowerOfTwo(numberTwo)) {
    printf("%d is pow two\n", numberTwo);
  } else {
    printf("%d no is pow of two\n", numberTwo);
  }


	int numberThree = 16;
	// 0 0 0 1 0 0 0 0
	// . . . 16 . . . .
  if (isPowerOfTwo(numberThree)) {
    printf("%d is pow two\n", numberThree);
  } else {
    printf("%d no is pow of two\n", numberTwo);
  }
  return 0;
}
