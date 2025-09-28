#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letters;

	letters = 'a';
	while (letters <= 'z')
	{
		write(1, &letters, 1);
		letters++;
	}
}

int    main(void)
{
    ft_print_alphabet(); // chamaR função
    return (0);
}