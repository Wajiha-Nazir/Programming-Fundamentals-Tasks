#include<stdio.h>

int main(){
	int num, i, vowels=0, cons=0;
	printf("Enter how many times you want to enter characters:\t");
	scanf("%d",&num);
	char words[num];
	for(i=1;i<=num;i++)
	{
		printf("Enter Character %d:\t",i);
		scanf("%s",&words[i]);
		words[i]=tolower(words[i]);
		if(words[i]=='a' || words[i]=='e' || words[i]=='i' || words[i]=='o' || words[i]=='u')
			vowels++;
		else
			cons++;
	}
	printf("You Entered %d vowels",vowels);
	printf("\nYou Entered %d consonants",cons);
	return 0;
}
