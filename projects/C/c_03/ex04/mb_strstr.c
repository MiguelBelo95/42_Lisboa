
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}



char    *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int i_s2 = 0;
    int s1_location = 0;
    char *p;
    int s2_len = ft_strlen(to_find);

	//If to_find comes empty
	if (to_find[0] == '\0')
		return (str);

    //Search in str until str[char] == to_find[char]
    while(to_find[i_s2] != str[i] && str[i] != '\0')
        i++;

    //store the location of potential pointer
    s1_location = i;

    // We either arrive to end of str or str[char] == to_find[char]
    while (to_find[i_s2] == str[i] && i_s2 < s2_len )
    {
        
        if (i_s2 + 1 == s2_len)
        {
            p = &str[s1_location];
            return p;
        }
        i++;
        i_s2++;
    }
    return (0);
    
}



int	main(void)
{
	char *str;
	char *to_find;
	char *buff;
	char *ft_buff;

	str = strcpy(calloc(11, sizeof(char)), "alo galera");
	to_find = strcpy(calloc(7, sizeof(char)), "galera");
	buff = strstr(str, to_find);
	ft_buff = ft_strstr(str, to_find);
	if (buff != ft_buff)
		printf("[1] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
	else
		printf("[1] OK. expected: %s result: %s\n", buff, ft_buff);
	str = strcpy(calloc(11, sizeof(char)), "alo galera");
	to_find = strcpy(calloc(7, sizeof(char)), "galerA");
	buff = strstr(str, to_find);
	ft_buff = ft_strstr(str, to_find);
	if (buff != ft_buff)
		printf("[2] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
	else
		printf("[2] OK. expected: %s result: %s\n", buff, ft_buff);
	str = strcpy(calloc(11, sizeof(char)), "alo galera");
	to_find = strcpy(calloc(1, sizeof(char)), "");
	buff = strstr(str, to_find);
	ft_buff = ft_strstr(str, to_find);
	if (buff != ft_buff)
		printf("[3] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
	else
		printf("[3] OK. expected: %s result: %s\n", buff, ft_buff);
	return (0);
}