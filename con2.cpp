
#define use_CRT_SECURE_NO_WARNIGNS
#include <iostream>


int main()
{
	int arg1;
	char bin[6];
	
	printf(" hex ");
	scanf_s ("%x", &arg1);
	



	switch (arg1)
	{
	case 0:
		strcpy_s(bin, "0000b");
		break;

	case 1:
		strcpy_s(bin, "0001b");
		break;

	case 2:
		strcpy_s(bin, "0010b");
		break;

	case 3:
		strcpy_s(bin, "0011b");
		break;

	case 4:
		strcpy_s(bin, "0100b");
		break;
	
	case 5:
		strcpy_s(bin, "0101");
		break;

	case 6:
		strcpy_s(bin, "0110");
		break;

	case 7:
		strcpy_s(bin, "0111");
		break;

	case 8:
		strcpy_s(bin, "1000");
		break;

	case 9:
		strcpy_s(bin, "1000");
		break;

	case 0x0A:
		strcpy_s(bin, "1010");
		break;

	case 0x0B:
		strcpy_s(bin, "1011");
		break;

	case 0x0C:
		strcpy_s(bin, "1100");
		break;

	case 0x0D:
		strcpy_s(bin, "1101");
		break;

	case 0x0E:
		strcpy_s(bin, "1110");
		break;

	case 0x0F:
		strcpy_s(bin, "1111");
		break;
	}
	printf("\n%s", bin);
	


}