#include <math.h>
#include <stdio.h>
main() {
	double x, y;
	printf("Введите значение x");
	scanf("%lf", &x);
	y = cos(x);
	printf("Результат: y = %lf/n", y);
	return 0;
}
