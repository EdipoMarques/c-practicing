#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letters;

	letters = '0';
	while (letters <= '9')
	{
		write(1, &letters, 1);
		letters++;
	}
}

int    main(void)
{
    ft_print_alphabet(); // chamar a função
    return (0);
}