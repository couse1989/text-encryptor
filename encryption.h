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

returned value:�����ַ������׵�ַ

�ڴ˺����в��ļ��Ĵ�С����malloc�ռ䣬�ٰ��ļ����ݶ������أ������ֽ�������׵�ַ
*********************************************************************************************/

extern char* read_src_file(unsigned long* file_length, char* src_file_name);

/********************************************************************************************

Function Describe			:	�����ַ���								

parameter:
			src_file_text	: Ҫ���ܵ��ַ���
			length			: �ַ����ĳ���
			password		: ��������

returned value				: ���ܺ���ַ����׵�ַ

*********************************************************************************************/

extern char* file_text_encrypt(char* src_file_text, unsigned long length, unsigned int password);

/********************************************************************************************

Function Describe			:	���ַ������浽Ŀ���ļ���							

parameter:
			text			: Ҫ������ַ����׵�ַ
			file_name		: Ŀ���ļ�������
			length			: �ַ����ĳ���

*********************************************************************************************/

extern void save_file(char* text, unsigned long length, char* file_name);

/********************************************************************************************

Function Describe			:	�����ַ���								

parameter:
			src_file_text	: Ҫ���ܵ��ַ���
			length			: �ַ����ĳ���
			password		: ��������

returned value				: ���ܺ���ַ����׵�ַ

*********************************************************************************************/

extern char* file_text_decrypt(char* src_file_text, unsigned long length, unsigned int password);