#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
	private:
	std::string name;
	std::string number;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string secret;

	public:
	
	int add_function(int i);

	std::string get_first_name();
	std::string get_name();
	std::string get_number();
	std::string get_nickname();
	std::string get_secret();
	
	int set_first_name(std::string);
	int set_name(std::string);
	int set_number(std::string);
	int set_nickname(std::string);
	int set_secret(std::string);
};

#endif