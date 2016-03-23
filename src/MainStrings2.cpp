/*

Use Strings2 File for testing any other function in other Cpp files of the Strings Project.

DO NOT write main function in any other File or else your Build Fails.s

Objectives of C-Strings-2 Lesson:

->Using malloc to create new strings
->New ways of Handling Strings

*/

#include <stdio.h>
#include "FunctionHeadersStrings2.h"

int main(){
	
	//Test Consonants_Vowels
	
	//Test getFrequencyofWord
	char str[] = "abababa";
	char word[] = "ab";
	int count = count_word_in_str_way_1(str, word);
	printf("%d", count);

	//Test getSubstring
	
	//Test getLastWord

	return 0;
}