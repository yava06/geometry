#include <stdio.h>

typedef struct {
	double x;
	double y;
	double r;
} circle;

double S(double r)
{
			double s;
			s = 3.14 * r * r;
			return s;
}

int main()
{
		circle num1;
		double s;
		printf("Введите параметры x, y, r: ");
		scanf("%lf %lf %lf" ,&num1.x ,&num1.y ,&num1.r);
		s = S(num1.r);
		printf("%.3lf\n", s);

    return 0;
}
