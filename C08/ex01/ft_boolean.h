#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#define EVEN_MSG "I have an even number of arguments\n"
#define ODD_MSG "I have an odd number of arguments\n"
#define EVEN(nbr)(nbr % 2 ? 1 : 0)
#define SUCCESS 0
#define TRUE true
#define FALSE false

#include <unistd.h> 

typedef enum s_bool
{
	true = 1,
	false = 0,
} t_bool;


#endif