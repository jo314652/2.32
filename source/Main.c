#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	float weight, height,BMI;
	printf("請輸入您的體重(公斤),身高(公尺)：");
	scanf_s("%f%f", &weight, &height);
	BMI = (weight / (height*height));
	printf("您的BMI值為：%.1lf\n",BMI);
	if (BMI < 18.5)
	{
		printf("您的BMI Valuse：Underweight\n");
	}
	if (BMI >= 18.5 && BMI<=24.9)
	{
		printf("您的BMI Valuse：Normal\n");
	}
	if (BMI >= 25 && BMI <= 29.9)
	{
		printf("您的BMI Valuse：Overweight\n");
	}
	if (BMI > 30)
	{
		printf("您的BMI Valuse：Obese\n");
	}

	system("pause");
	return 0;
}