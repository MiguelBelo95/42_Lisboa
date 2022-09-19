#include <stdio.h>


int ft_str_len(char *str)
{
    int c = 0;

    while(str[c] != '\0')
        c++;
    return(c);
}

int ft_str_is_printable(char *str)
{
    int i = 0; 
     /*if(str[i] == '\0')
        return (1); we don't need this additional condtion because is str[i] == \0 the loop doesnt run */
        
    /*if(!ft_str_len(str)) //if str len is bigger than zero, condition becomes false.
        return(1);*/

    while(str[i] != '\0')
    {
        if(!(str[i] > 31 && str[i] < 128))
            return(0);

        i++;
    }
    return(1);
}

/*int	str_len(char *str);
int	is_char_print(char c);

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (!str_len(str))
		return (1);
	while (*(str + i) != '\0')
	{
		if (!is_char_print(*(str + i)))
			return (0);
		i++;
	}
	return (1);
}

int	is_char_print(char c)
{
	if ((c <= 31 || c >= 127))
		return (0);
	return (1);
}

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}*/

int	main(void)
{
	char	*str1 = "";
	char	*str2 = "asdfasdf";
	char	*str3 = "SADFLSDFGMS";
	char	str4[4];
	char	a = 0;
	char	b = 1;

	str4[0] = a;
	str4[1] = b;

	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));
	printf("%d\n", ft_str_is_printable(str3));
	printf("%d\n", ft_str_is_printable(str4));
	printf("%d\n", a);

	return (0);
}