char* file_text_encrypt(char* src_file_text, unsigned long length, unsigned int password)
{
	int i = 0;
	for (i=0;i < length; i++)
	{
		src_file_text[i] += password;
	}
	return src_file_text;
}