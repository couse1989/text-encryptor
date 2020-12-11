#include <stdio.h>
#include <stdlib.h>
char* read_src_file(unsigned long* file_length, char* src_file_name)
{
	char* data = NULL;
	FILE* fp = NULL;
	
	if ((fp = fopen(src_file_name, "r")) == NULL)
	{
		printf("open src_file_name err\n");
		exit(0);
	}
	fseek(fp, 0, 2);
	*file_length = ftell(fp);
	rewind(fp);

	data = (char*)calloc(1, *file_length);
	if (data == NULL)
	{
		perror("calloc");
		return NULL;
	}

	fread(data, *file_length, 1, fp);
	fclose(fp);
	return data;

}