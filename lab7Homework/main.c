#include <stdio.h>
#include <locale.h>

main()
{
	int k, lastdigit;
	setlocale(LC_ALL, "RUS");
	printf("Введите число от 1 до 99, обозначающее денежную единицу:");
	scanf("%d", &k);
	lastdigit = k % 10;
	switch (lastdigit)
	{
	case 1:
		switch (k)
		{
		case 11: printf("%d копеек", k);
			break;
		default: printf("%d копейка", k);
			break;
		}
		break;
	case 2: case 3: case 4:
		switch (k)
		{
		case 12: printf("%d копеек", k);
			break;
		case 13: printf("%d копеек", k);
			break;
		case 14: printf("%d копеек", k);
			break;
		default: printf("%d копейки", k);
			break;
		}
		break;
	case 5: case 6: case 7: case 8: case 9: case 0:
		printf("%d копеек", k);
		break;
	}
	return 1;
}
