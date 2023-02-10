#include <unistd.h>
void ft_print_alphabet(void)
{
	char giorgia;
	giorgia = 'a';
	
	while (giorgia<=122)
	{	
		write (1, &giorgia, 1);
		giorgia++;
	}
}
