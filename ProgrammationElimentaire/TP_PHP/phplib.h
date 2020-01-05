#ifndef PHPLIB_H
#define PHPLIB_H

char * php_ltrim(char * source);
char * php_rtrim(char * source);
char * php_trim (char * source);
char * php_nl2br(char * source);
// char * php_number_format (int number, int numzero, char separator);
char * php_strtolower (char * str);
char * php_strtoupper (char * str);
char * php_lcfirst (char * str);
char * php_ucfirst(char * str);
char * php_strstr (char*source, char* from, char* to);
char * php_substr_replace (char * source, char * pattern, int start);
char * php_substr (char * source, int start);
int php_substr_count(char*source, char*pattern);

#endif // PHPLIB_H

