#include <unistd.h> 
void ft_print_reverse_alphabet(void)
{
 char zoran; 
 zoran = 'z';
 while (zoran>='a')
 { write(1,&zoran,1);
	 zoran--;
}

}

 

