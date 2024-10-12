#include <stdio.h>
#include <math.h>

int main()
{
	int ch;
	float C, F;
	printf("Select the Options to Convert from:\n");
	printf("1.Centigrade to Fahrenheit\n2.Fahrenheit to Centigrade\n3.Exit\nEnter Your Choice:\n");
	scanf("%d", &ch);

	switch(ch)
	{
	case 1:
		//For Centigrade to Fahrenheit

		printf("Centigrade to Fahrenheit Selected\n");
		printf("Enter the temp in centigrade.\n");
		//https://t.me/PHOENIXYTM
		scanf("%f", &C);

		F = C * (1.8) + 32;

		printf("The temp in Fahrenheit is %.2f\n", F);

		break;

	case 2:

//For Fahrenheit to Centigrade

		printf("Fahrenheit to Centigrade Selected\n");
		printf("Enter the temp in Fahrenheit.\n");
		scanf("%f", &F);

	       C = (F - 32)/(1.8);

		printf("The temp in Centigrade is %.2f\n", C);

		break;

	case 3:
		printf("Exiting program.....");
		break;
	}
	return 0;
}

//https://t.me/PHOENIXYTM