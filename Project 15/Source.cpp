#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int op(int a,char operation,int b)
{
	int result;
	switch (operation)
	{
	case '+':
		result = a+b;
		break;

	case '-':
		result = a-b;
		break;
	case '*':
		result = a*b;
		break;
	case '/':
		result = a/b;
		break;
	default:
		break;
	}
	return result;
}
struct Variable 
{
	int a;
	char operation;
	int b;
	int xxxnum[100];
	int result;
	int i = 0, count = 0;
};
int main()
{
	struct Variable varieble;
	scanf("%d" "%c" "%d", &varieble.a,&varieble.operation, &varieble.b);
	printf("%d", op(varieble.a, varieble.operation, varieble.b));
	varieble.result = op(varieble.a, varieble.operation, varieble.b);
	printf("\n");

	char o[10][5][5] =
	{
		{
			"xxxx",
			"x  x",
			"x  x",
			"x  x",
			"xxxx"
		},
		{
			"   x",
			"   x",
			"   x",
			"   x",
			"   x"
		},
		{
			"xxxx",
			"   x",
			"xxxx",
			"x   ",
			"xxxx"
		},
		{
			"xxxx",
			"   x",
			"xxxx",
			"   x",
			"xxxx"
		},
		{
			"x  x",
			"x  x",
			"xxxx",
			"   x",
			"   x"
		},
		{
			"xxxx",
			"x   ",
			"xxxx",
			"   x",
			"xxxx"
		},
		{
			"xxxx",
			"x   ",
			"xxxx",
			"x  x",
			"xxxx"
		},
		{
			"xxxx",
			"   x",
			"   x",
			"   x",
			"   x"
		},
		{
			"xxxx",
			"x  x",
			"xxxx",
			"x  x",
			"xxxx"
		},
		{
			"xxxx",
			"x  x",
			"xxxx",
			"   x",
			"xxxx"
		},
	};
	if (varieble.result < 1000000000 && varieble.result>0) {
		while (varieble.result > 0)
		{
			varieble.xxxnum[varieble.i] = varieble.result % 10;
			varieble.result = varieble.result / 10;
			varieble.i++;
		}
		varieble.count = varieble.i;
		for (int k = 0; k < 5; k++)
		{
			for (varieble.i = varieble.count - 1; varieble.i >= 0; varieble.i--)
			{
				printf("%s\t", o[varieble.xxxnum[varieble.i]][k]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Error");
	}
	return 0;
}

