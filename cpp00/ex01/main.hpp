#ifndef MAIN_HPP
# define MAIN_HPP

#include "iostream"
#include "iomanip"
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <unistd.h>

int		error_msg(void);
int		check_type(std::string str);
int		type_text(std::string text, int flag);
void	end_book(int flag);
void	loop_com(void);

#endif