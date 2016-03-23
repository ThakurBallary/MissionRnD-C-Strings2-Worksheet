/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	if (!str) {
		return NULL;
	}
	char *last_word = (char*)malloc(1);
	int i = 0, j = 0, k = 0;
	while (str[i] != NULL) {
		if (str[i] != ' ') {
			last_word[j] = str[i];
			j++;
			k = j;
		}
		else {
			j = 0;
		}
		i++;
	}
	last_word[k] = '\0';
	return last_word;
}
