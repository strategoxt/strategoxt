ATerm SSL_file_exists(ATerm t);
ATerm SSL_open_file(ATerm name, ATerm mode);
ATerm SSL_append_file(ATerm name);
ATerm SSL_close_file(ATerm name);
ATerm SSL_print(ATerm file, ATerm str);
ATerm SSL_printnl(ATerm file, ATerm str);
ATerm SSL_printascii(ATerm file, ATerm str);
ATerm SSL_ReadFromFile(ATerm filename);
ATerm SSL_WriteToFile(ATbool binary, ATerm filename, ATerm trm);
ATerm SSL_WriteToBinaryFile(ATerm file, ATerm t);
ATerm SSL_WriteToTextFile(ATerm file, ATerm t);

ATerm SSL_getchar(ATerm filename);
