#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int lab8task0()
{
	int y;
	char x;
	printf("������� ���������� �������� \n");
	scanf("%d", &y);
	getchar();
	printf("������� ��� ������� \n");
	scanf("%c", &x);
	for (int start = 1; start <= y; start++) printf("%c",x);
}
int lab8task01()
{
	int y, y1, y2;
	char x, z;
	printf("������� ���������� �������� \n");
	scanf("%d", &y);
	getchar();
	printf("������� 1 ��� ������� \n");
	scanf("%c", &x);
	getchar();
	printf("������� 2 ��� ������� \n");
	scanf("%c", &z);
	y1 = y / 2;
	y2 = y - y1;
	for (int start = 1; start <= y1; start++) if (start != 1) printf("%c!", x); else printf("+!");
	for (int start = 1; start <= y2; start++) if (start != y2) printf("%c!", z); else printf("+!");
}
int lab8task1()
{
	int n, m, s=0, k=0;
	printf("������� n \n");
	scanf(" %d", &n);
	printf("������� m \n");
	scanf(" %d", &m);
	for (int i = m; i >= n; i--) 
	{
		s += i;
		printf("��������� %d ��� \n", k++);
	}
	printf("��������� %d", s);
}
int lab8task2()
{
	double  y, s;
	printf("������� ��� ��������� ��� ������� y=x^2-cos^2(x+1)\n");
	scanf("%lf", &s);
	//y = pow(x, 2) - pow(cos(x + 1), 2);
	printf(" __________________________ \n");
	printf("|                          |\n");
	for (float x = 0.1; x <= 2.2; x += s) { y = pow(x, 2) - pow(cos(x + 1), 2); printf("| %5.1f      %+5.6lf    |\n", x, y); }
	printf("|__________________________|\n");

}
int lab8task3()
{
	int n2;
	double x, y=0;
	printf("������� n \n");
	scanf(" %d", &n2);
	printf("������� x \n");
	scanf(" %lf", &x);
	for (int n1 = 1; n1 <= n2; n1++) y += pow(sin(x), n1);
	printf("%lf", y);
}
int main()
{
	setlocale(LC_CTYPE, "RUS");
	//lab8task0();
	//lab8task01();
	//lab8task1();
	//lab8task2();
	lab8task3();
}