#include <stdio.h>

void get_file_name(char* dest_file_name, char* src_file_name)

{
	printf("������Դ�ļ�����·��:");
	scanf_s("%s", src_file_name,64);
	printf("������Ŀ���ļ�����·��:");
	scanf_s("%s", dest_file_name,64);
	return;
}