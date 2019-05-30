
#define use_CRT_SECURE_NO_WARNIGNS
#include <iostream>


int main()
{
	int arg1 = 0;
	char bin[10];

	printf(" hex ");
	scanf_s("%x", &arg1);

	int mask[8] = { 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01 };
	for (int i = 0; i < 8; i++)
	{
		if (arg1 & mask[i])
			bin[i] = 1;
			
		else
			bin[i] = 0;
		
	}

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

	printf("\n%s\n", bin);
	
	







	/*char bin[10];

	again:

	printf(" hex ");
	scanf_s ("%x", &arg1);

	// 7
	if (arg1 & 0x80)
		bin[0] = '1';
	else
		bin[0] = '0';

	// 6
	if (arg1 & 0x40)
		bin[1] = '1';
	else
		bin[1] = '0';

	// 5
	if (arg1 & 0x20)
		bin[2] = '1';
	else
		bin[2] = '0';

	// 4
	if (arg1 & 0x10)
		bin[3] = '1';
	else
		bin[3] = '0';

	// 3
	if (arg1 & 0x08)
		bin[4] = '1';
	else
		bin[4] = '0';

	// 2
	if (arg1 & 0x04)
		bin[5] = '1';
	else
		bin[5] = '0';

	// 1
	if (arg1 & 0x02)
		bin[6] = '1';
	else
		bin[6] = '0';

	// 0
	if (arg1 & 0x01)
		bin[7] = '1';
	else
		bin[7] = '0';

	bin[8] = 'b';
	bin[9] = 0;

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


	printf("\n%s\n", bin);
	
	if (arg1 == 0x0A)
		return 0;

	goto again; */

}