
#include "main.h"




/**


 * char *_strcpy - program copies the string pointed to by src


 * @dest: copy to


 * @src: copy from


 * Return: string value


 */


char *_strcpy(char *dest, char *src)


{


        	int b = 0;


        	int a = 0;


 


        	while (*(src + b) != '\0')


        	{


                    	b++;


        	}


        	for ( ; a < b ; a++)


        	{


                    	dest[a] = src[a];


        	}


        	dest[b] = '\0';


        	return (dest);


}
