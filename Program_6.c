#include <stdio.h>
#include <math.h>

int main()
{
	int ch;
	float a, b, c;
	printf("Select the Options to Swap Two Numbers:\n");
	printf("1.Using Third Variable\n2.Without Using THird Variable\n3.Exit\nEnter Your Choice:\n");
	scanf("%d", &ch); // https://t.me/PHOENIXYTM

	switch (ch)
	{
	case 1:
		// For Third variable

		printf("Enter any two number to swap\n");
		printf("Enter First number\n");
		scanf("%f", &a);
		printf("Enter Second number\n");
		scanf("%f", &b);

		printf("Using Third Varable Selected\n");
		printf("Before swap\n a = %.2f\n b = %.2f\n", a, b);

		c = a;
		a = b; // https://t.me/PHOENIXYTM
		b = c;

		printf("After swap \na = %.2f\n b = %.2f", a, b);

		break;

	case 2:

		// For Third variable

		printf("Enter any two number to swap\n");
		printf("Enter First number\n");
		scanf("%f", &a);
		printf("Enter Second number\n");
		scanf("%f", &b);

		printf("Without Using Third Varable Selected\n");
		printf("Before swap\na = %.2f\n b = %.2f\n", a, b);

		a = a + b;
		b = a - b;
		a = a - b;

		printf("After swap \na = %.2f\n b = %.2f", a, b);

		break;

	case 3:
		printf("Exiting program.....");
		// https://t.me/PHOENIXYTM
		break;
	}
	return 0;
}
