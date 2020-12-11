/********************************************************************************************

Function Describe:	print help information													

*********************************************************************************************/

extern void print_help(viod);

/********************************************************************************************

Function Describe:	get source file and destination filename								

parameter:
			src_file_name: source filename character array frist address
			dest_file_name: destination filename charactor array frist address

*********************************************************************************************/

extern void get_file_name(char* dest_file_name, char* src_file_name);

/********************************************************************************************

Function Describe:	read file contents													

parameter:
			file_length: long pointer,the length of bytes to save the file
			src_file_name: source filename

returned value:读出字符串的首地址

在此函数中测文件的大小，并malloc空间，再把文件内容读出返回，读出字节数组的首地址
*********************************************************************************************/

extern char* read_src_file(unsigned long* file_length, char* src_file_name);

/********************************************************************************************

Function Describe			:	加密字符串								

parameter:
			src_file_text	: 要加密的字符串
			length			: 字符串的长度
			password		: 加密密码

returned value				: 加密后的字符串首地址

*********************************************************************************************/

extern char* file_text_encrypt(char* src_file_text, unsigned long length, unsigned int password);

/********************************************************************************************

Function Describe			:	将字符串保存到目的文件中							

parameter:
			text			: 要保存的字符串首地址
			file_name		: 目的文件的名字
			length			: 字符串的长度

*********************************************************************************************/

extern void save_file(char* text, unsigned long length, char* file_name);

/********************************************************************************************

Function Describe			:	解密字符串								

parameter:
			src_file_text	: 要解密的字符串
			length			: 字符串的长度
			password		: 解密密码

returned value				: 解密后的字符串首地址

*********************************************************************************************/

extern char* file_text_decrypt(char* src_file_text, unsigned long length, unsigned int password);