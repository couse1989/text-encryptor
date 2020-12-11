#include <stdio.h>
#include <stdlib.h>

void save_file(char* text, unsigned long length, char* file_name)
{
	FILE *fp = NULL;
	printf("%s", file_name);
	if ((fp = fopen(file_name, "w")) == NULL)
	{
		perror("fopen");
		return;
	}
	fwrite(text, length, 1, fp);
	fclose(fp);
	free(text);
	printf("save success\n");
	return;
}