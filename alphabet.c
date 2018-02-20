#include <stdio.h>

int main() 
{
	char s;
	scanf("%c",&s);
	if(s>='a' && s<='z' || s>='A' && s<='Z')
	{
	printf("alphabet");
	}
 else
 {
  printf("not alphabet");
 }

	return 0;

}
