#include <stdio.h>

int main(int argc, char *argv[]){
	float x;
	float y;
	float ans;
	char op;

	op = argv[1][0];
	sscanf(argv[2], "%f", &x);
	sscanf(argv[3], "%f", &y);

	switch (op)
	{
		case '+':
			ans=x+y;
			printf("%f\n", ans);
			break;
		case '-':
			ans=x-y;
			printf("%f\n", ans);
			break;
		case 'x':
			ans=x*y;
			printf("%f\n", ans);
			break;
		case '/':
			ans=x/y;
			printf("%f\n", ans);
			break;
	}
return 0;
}
