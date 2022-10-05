#include <stdio.h>
#include "ft_point.h"

void set_point(t_point *point)
{
	(*point).x = 42;
	point->y = 1337;
}

int main(void)
{
	t_point values;

	set_point(&values);

	printf("value of x: %i\n", values.x);
	printf("value of y: %i\n", values.y);
	return (0);
}