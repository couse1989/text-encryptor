/********************************************************************************************************************************
** Porject_Name	:File Encryptor																									*
** Version			:Ver 1.0.1																									*
** Data			:2020/12/10																										*
** Created by Bob																												*
*********************************************************************************************************************************/

#include <stdio.h>
#include "encryption.h"

int main(int argc, char* argv[])
{
	while (1)
	{
		int cmd = 0;
		print_help();

		printf("请输入需要操作的指令:");
		scanf_s("%d", &cmd);

		if (cmd == 1)
		{
			char dest_file_name[64]="";
			char src_file_name[64]="";
			int password=0;
			unsigned long file_length = 0;
			char* str = NULL;
			//获取源文件和目标文件
			get_file_name(dest_file_name, src_file_name);
			

			//获取文件内容
			str=read_src_file(&file_length,src_file_name);

			//获取密码
			printf("请输入无符号数字密码:");
			scanf_s("%d", &password);
	
			//加密文件
			str=file_text_encrypt(str, file_length, password);

			//保存目标文件
			save_file(str, file_length, dest_file_name);
		}
		else if (cmd == 2)
		{
			char dest_file_name[64] = "";
			char src_file_name[64] = "";
			int password = 0;
			unsigned long file_length = 0;
			char* str = NULL;
			//获取源文件和目标文件
			get_file_name(dest_file_name, src_file_name);


			//获取文件内容
			str = read_src_file(&file_length, src_file_name);

			//获取密码
			printf("请输入无符号数字密码:");
			scanf_s("%d", &password);

			//解密文件
			str = file_text_decrypt(str, file_length, password);

			//保存目标文件
			save_file(str, file_length, dest_file_name);
		}
		else if (cmd == 3)
		{
			break;
		}
		else
		{
			printf("请输入正确的数字！\n");
		}
	}
	
	return 0;
}