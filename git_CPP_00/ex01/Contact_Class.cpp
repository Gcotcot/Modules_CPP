/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:27:15 by gcot              #+#    #+#             */
/*   Updated: 2023/09/17 14:00:55 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact_Class.hpp"

Contact::Contact()
{
}

void Contact::Set_Contact(std::string n_first_name, std::string n_last_name, std::string n_nickname, std::string n_phone, std::string n_secret)
{
	first_name = n_first_name;
	last_name = n_last_name;
	nickname = n_nickname;
	phone = n_phone;
	secret = n_secret;
}

void Contact::Show_contact()
{
	std::cout << "First name\n>>" << first_name << "\n\n";
	std::cout << "Last name\n>>" << last_name << "\n\n";
	std::cout << "Nickname\n>>" << nickname << "\n\n";
	std::cout << "Phone\n>>" << phone << "\n\n";
	std::cout << "Dark secret\n>>" << secret << "\n\n";
}

void Contact::Index_contact(int index)
{
	std::cout << "|";
	for (int x = 0; x < 9; x++)
		std::cout << " ";
	std::cout << index;
	std::cout << "|";
	if (this->first_name.length() <= 10)
		for (long unsigned int i = 0; i < 10 - this->first_name.length(); i++)
			std::cout << " ";
	if (this->first_name.length() > 10)
		std::cout << this->first_name.substr(0, 9) << ".|";
	else
		std::cout << this->first_name << "|";
	if (this->last_name.length() <= 10)
		for (long unsigned int i = 0; i < 10 - this->last_name.length(); i++)
                	std::cout << " ";
        if (this->last_name.length() > 10)
                std::cout << this->last_name.substr(0, 9) << ".|";
        else
                std::cout << this->last_name << "|";
	if (this->nickname.length() <= 10)
		for (long unsigned int i = 0; i < 10 - this->nickname.length(); i++)
                	std::cout << " ";
        if (this->nickname.length() > 10)
                std::cout << this->nickname.substr(0, 9) << ".|\n";
        else
                std::cout << this->nickname << "|\n";
}

Contact::~Contact()
{
}
