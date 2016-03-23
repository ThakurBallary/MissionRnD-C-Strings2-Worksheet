/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>

char vowelOrConsonant(char c) {
	if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
		return 'v';
	}
	else if ((c > 'A' && c <= 'Z') || (c > 'a' && c <= 'z')) {
		return 'c';
	}
	return NULL;
}

void count_vowels_and_consonants(char *str,int *consonants, int *vowels) {
	*consonants = 0;
	*vowels = 0;
	if (!str) {
		return;
	}
	int i = 0;
	while (str[i] != '\0') {
		if (vowelOrConsonant(str[i]) == 'v') {
			(*vowels)++;
		}
		else if (vowelOrConsonant(str[i]) == 'c') {
			(*consonants)++;
		}
		i++;
	}
}
