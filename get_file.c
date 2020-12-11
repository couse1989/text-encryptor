#include <stdio.h>

void get_file_name(char* dest_file_name, char* src_file_name)

{
	printf("请输入源文件完整路径:");
	scanf_s("%s", src_file_name,64);
	printf("请输入目标文件完整路径:");
	scanf_s("%s", dest_file_name,64);
	return;
}