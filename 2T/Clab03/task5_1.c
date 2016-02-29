# include <stdio.h> //space
# include <string.h> //needs to be included
int main(void)
{
	//this program is going to take a word from the user
	//and convert it to an array
	int n,l,i,j;
	char word[100], arr[100];
	printf(" Enter a word :\n");
	fgets(word, sizeof(word), stdin); //reads the word from the user
	word[n-1]='\0';
	n=strlen(word); //this needs to be switched with the prev
	l=strlen(word); //missing ;
	j=1;
	for(i=0;i<=l;i++)	//loops through the chars in the word
	{
		arr[i]=word[l-j];
		j++;
	}
	if(0==strcmp(word,arr))
	{
		printf(" The word \"%s\" TEXT \n", word);
	}
	else
		printf(" The word \"%s\" TEXT \n", word);
}