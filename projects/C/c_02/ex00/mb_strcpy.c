#include <stdio.h>

//char* strcpy(char* dest, const char* src);
//dest: Pointer to the destination array where the content is to be copied.
//src: string which will be copied.

char    *strcopy(char *dest, char *src)
{
    int i;

    i = 0;
    while(src[i] != '\0') //*(src + i) != '\0'
    {
        dest[i] = src[i]; //*(dest + i) = *(src + i);
        i++;
    }
    dest[i] = '\0'; //We need to add a null after the copy to tell C this array is a STR
    return (dest);
}

