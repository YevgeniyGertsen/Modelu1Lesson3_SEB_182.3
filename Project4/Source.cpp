#include <stdio.h>
#include <locale.h>
#include<iostream>

#define Yevgen 100


void main()
{
	setlocale(LC_ALL, "");

start:
	float a, c;
	printf("������� ���������� ����������� ");
	scanf_s("%f", &a);





	c = a / 100;
	printf("%f\n", c);
	goto start;







	/*int a, b, c , z , x;
	printf("������� ������� ���� ");
	scanf_s("%d", &a);
	printf("������� ������� ����");
	scanf_s("%d", &b);
	c = (a + b) / 2;
	z = abs(c - a);
	x = abs(c - b);
	printf("%d\n%d\n%d\n", c, x, z);*/








	/*int a, b, c;
	printf("������� ������� ");
	scanf_s("%d", &b);
	printf("������� ���������� �������");
	scanf_s("%d", &a);
	c = a / b;
	printf("%d\n", c);*/



	/*int m, v, r;
	printf("������� ����� ");
	scanf_s("%d", &m);
	printf("������� �����");
	scanf_s("%d", &v);
	r = m / v;
	printf("%d,\n", r);*/




	/*int x, a, b, z, y;
	printf("������� a ");
	scanf_s("%d", &a);
	printf("������� b");
	scanf_s("%d", &b);
	z = b *b *b;
	y= b * b;
	x = (3, 56 * a) + z - (5, 8 * y) + (3, 8 * a) - 1, 5;
	printf("%d\n", x);*/







	/*int z, x, y, a, b;
	printf("������� x ");
	scanf_s("%d", &x);
	printf("������� y");
	scanf_s("%d\n", &y);
	a = x * x*x;
	b = x * x;
	z = a - (2, 5 * x*y) + (1, 78 * b) - (2, 5 * y) + 1;
	printf("%d", z);*/



	/*int a, b;
	a = 4;
	b = a * 4;
	printf("%d\n", b);*/

	/*int y, x,a;
	printf("������� x");

	scanf_s("%d", &x);

	a = x * x;
	y = (7 * a) - ((3 * x) + 6);

	printf("%d\n",y);*/







	/*printf("5,10\n");
	printf("7��\n");
	printf("100t\n,1494v\n");
	printf("x25\nxy");*/

	system("pause");
}