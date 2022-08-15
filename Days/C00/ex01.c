#include <unistd.h>

void ft_print_alphabet(void) {
    write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}


// Just the main
int main(void) 
{ 
	ft_print_alphabet(); 
	return (0);	
}
