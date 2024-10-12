#include <stdio.h>
#include <math.h>

int main()
{
	int ch;
	float l, b, s, r, Area, Peri, Side1, Side2, Side3, k, x;
	printf("Select the Options below to Find Area And Perimeter\n");
	printf("1.Rectangle\n2.Square\n3.Circle\n4.Triangle Using Heron's formula\n5.Exit\nEnter Your Choice:\n");
	scanf("%d", &ch);

	switch(ch)
	{
	case 1:
		//For rectangle

        printf("Enter the Length And Breath of Rectangle\n");
		printf("Enter Length\n");
		scanf("%f", &l);
		//https://t.me/PHOENIXYTM
		printf("Enter Breath\n");
		scanf("%f", &b);

		Area = l * b;
		Peri = 2 * (l + b);

		printf("The Area of Rectangle is %f\nThe perimeter of Rectangle is %f\n", Area, Peri);

		break;

	case 2:

		// for Square

		printf("Enter the Side of square\n");
		scanf("%f", &s);

		Area = s * s;
		Peri = 4 * s;

		printf("The Area of square is %0.2f\nThe perimeter of square is %0.2f\n", Area, Peri);

		break;

	case 3:
		// For Circle

		printf("Enter the radius of circle\n");
		scanf("%f", &r);

		Area = 3.14 * r * r;
		Peri = 2 * 3.14 * r;

		printf("The Area of circle is %0.2f\nThe perimeter of circle is %0.2f\n", Area, Peri);

		break;

	case 4:
		//For triangle

		printf("Enter the side 1 of triangle\n");
		scanf("%f", &Side1);
		printf("Enter the side 2 of triangle\n");
		scanf("%f", &Side2);
		printf("Enter the side 3 of triangle\n");
		scanf("%f", &Side3);

		Peri = Side1 + Side2 + Side3;
		k = Peri / 2;
		x = k*(k - Side3)*(k - Side1)*(k - Side2);
		//https://t.me/PHOENIXYTM
		Area = sqrt(x);

		printf("The Area of Triangle is %0.2f\nThe perimeter of Triangle is %0.2f\n", Area, Peri);


		break;

	case 5:
	printf("Exiting program.....");
		break;
	}
	return 0;
}
