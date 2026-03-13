#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[])
{
	if(argc == 1)
	{
		printf("print: print [strings]\n");
	}
	else if(strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0)
	{
		printf("print: print [strings]\n");
		printf("-h --help Show This Help Message\n");
		return 0;
	}
	else
	{
		for(int i = 1; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
		return 0;
	}
	return 0;
}
