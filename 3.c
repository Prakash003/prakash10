#include <stdio.h>
 int main()
{
    char cha;
 
    printf("Please Enter an alphabet: \n");
    scanf(" %c", &ch);
    if(cha == 'a' || cha == 'e' || cha == 'i' || cha == 'o' || cha == 'u' ||
		cha == 'A' || cha == 'E' || cha == 'I' || cha == 'O' || cha == 'U')  {
		printf("\n %c is a VOWEL.", ch);
	}
    else {
    	printf("\n %c is a CONSONANT.", ch);
	}
    return 0;
}
