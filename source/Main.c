#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	float weight, height,BMI;
	printf("�п�J�z���魫(����),����(����)�G");
	scanf_s("%f%f", &weight, &height);
	BMI = (weight / (height*height));
	printf("�z��BMI�Ȭ��G%.1lf\n",BMI);
	if (BMI < 18.5)
	{
		printf("�z��BMI Valuse�GUnderweight\n");
	}
	if (BMI >= 18.5 && BMI<=24.9)
	{
		printf("�z��BMI Valuse�GNormal\n");
	}
	if (BMI >= 25 && BMI <= 29.9)
	{
		printf("�z��BMI Valuse�GOverweight\n");
	}
	if (BMI > 30)
	{
		printf("�z��BMI Valuse�GObese\n");
	}

	system("pause");
	return 0;
}