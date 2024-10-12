#include <stdio.h>
#include <math.h>

int main()
{
	int ch;
	float H, R, J, vol;
	printf("Select the Options below to Find Volume Of:\n");
	//https://t.me/PHOENIXYTM
	printf("1.Cylinder\n2.Cone\n3.Sphere\n4.Cube\n5.Cuboid\n6.Exit\nEnter Your Choice: ");
	scanf("%d", &ch);

	switch(ch)
	{
	case 1:
		//For Cylinder

		printf("Enter the Height And Radius of Cylinder\n");
		printf("Enter Height\n");
		scanf("%f", &H);
		printf("Enter Radius\n");
		scanf("%f", &R);

		vol = 3.14*R*R*H;

		printf("The Volume of Cylinder is %.2f\n", vol);

		break;

	case 2:

		// for Cone

		printf("Enter the Height And Radius of Cone\n");
		printf("Enter Height\n"); //https://t.me/PHOENIXYTM
		scanf("%f", &H);
		printf("Enter Radius\n");
		scanf("%f", &R);

		vol = 0.333*3.14*R*R*H;

		printf("The Volume of Cone is %.2f\n", vol);

		break;

		break;

	case 3:
		// For Sphere

		printf("Enter the radius of Sphere\n");
		scanf("%f", &R);

		vol = 1.333*3.14*R*R*R;

		printf("The Volume of Sphere is %.2f\n", vol);

		break;

	case 4:
		//For Cube

		printf("Enter the side of Cube\n");
		scanf("%f", &H);

		vol = H*H*H; //https://t.me/PHOENIXYTM

		printf("The Volume of Sphere is %.2f\n", vol);


		break;

	case 5:
		//For Cuboid

		printf("Enter the Length of Cuboid\n");
		scanf("%f", &H);
		printf("Enter the Breath of Cuboid\n");
		scanf("%f", &R);
		printf("Enter the Height of Cuboid\n");
		scanf("%f", &J);

		vol = H*R*J;

		printf("The Volume of Cuboid is %.2f\n", vol);


		break;
	case 6:
		printf("Exiting program.....");
		break;
	}
	return 0;
}
