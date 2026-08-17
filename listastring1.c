#include <stdio.h>
/* Suponha que não existissem as funções strlen,
strcpy, strcat e strcmp. Pede-se, então, a
implementação de funções que tenham o
mesmo objetivo daquelas. */

int strlenn(char str[])
{
	int i;
	
	for(i=0;str[i]!='\0';i++);
	
	
	return i;
}

void strcpyy(char str[], char str2[])
{
	int i;
	
	for(i=0;str2[i]!='\0';i++)
	{
		str[i] = str2[i];
	}
	str[i] = '\0';
}

void strcatt(char str[], char str2[])
{
    int i,j=0;

    for(i=0;str2[i]!='\0';i++)
    {
    	do
    	{
    	   
    	  if(str[j]=='\0')
    	  {
    		str[j]==str[i];
    	    str[j+1]=='\0';
    	    i++;
		  }
             j++;  
    	}while(str[j]!='\0');
	}
}

/*int strcmp(char str[], char str2[])
{
	int i, algarismos, alg;
	
	algarismos = strlenn(str);
	alg = strlenn(str2);
	
	if(algarismos == alg)
	{
		return 0;
    }
    else
    
    do
    {
    	i++;
	}
    while((str[i]!='\0')&&(str2[i]!='\0'));
    
    if(str[i-1] =='\0')
    {
    	return -2;
	}
	else
	
	return 3;
}*/

int strcmp(char str1[], char str2[])
{
    int i;
    
    for(i=0;str1[i]!='\0'&&str1[i]==str2[i];i++);
    
    return str1[i]-str2[i];
}

void main()
{
	char string[] = "texto", string2[] = "bulma";
	int resp1, resp4;
	
	resp1 = strlenn(string);
	printf("Esta e a quantidade de algarismos: %d\n", resp1);
	
	//strcpyy(string, string2);
	
	
    resp4 = strcmp(string, string2);
    printf("%d\n", resp4);
    
}


