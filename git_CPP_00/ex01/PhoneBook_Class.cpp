/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:39:50 by gcot              #+#    #+#             */
/*   Updated: 2023/09/17 15:14:58 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_Class.hpp"
#include "Utils.hpp"

PhoneBook::PhoneBook()
{
	this->nb_contact = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::Add_contact()
{
	std::string f_name, l_name, nickname, phone, secret;
	std::cout << "Enter the first name\n";
	std::getline(std::cin, f_name);
	f_name = ft_change_tab(f_name);
	std::cout << "Enter the last name\n";
	std::getline(std::cin, l_name);
	l_name = ft_change_tab(l_name);
	std::cout << "Enter the nickname\n";
	std::getline(std::cin, nickname);
	nickname = ft_change_tab(nickname);
	phone = ft_is_number_phone();
	std::cout << "Enter the dark secret\n";
	std::getline(std::cin, secret);
	this->contact[nb_contact].Set_Contact(f_name, l_name, nickname, phone, secret);
	this->nb_contact++;
	if (this->nb_contact > 7)
		this->nb_contact = 0;
}

void PhoneBook::Search_contact()
{
	int	nb;

	PhoneBook::Show_book();
	std::cout << "\nEnter index contact\n";
	std::cin >> nb;
	if (nb < 1 || nb > 8)
	{
		std::cout << "!! ERROR : Index invalid [" << nb << "] !!\n\n";
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		this->Search_contact();
	}
	else
		contact[nb - 1].Show_contact();
}

void PhoneBook::Line_separator(void)
{
	std::cout << " ";
	for (int y = 0; y < 10 * 4 + 3; y++)
		std::cout << "-";
	std::cout << "\n";
}

void PhoneBook::Show_book()
{
	PhoneBook::Line_separator();
	std::cout << "|   Index  |First name| Last Name| Nickname |\n";
	PhoneBook::Line_separator();
	for (int i = 0; i < 8; i++)
		this->contact[i].Index_contact(i + 1);
	PhoneBook::Line_separator();
}

int PhoneBook::Show_nb_contact()
{
	return (this->nb_contact);
}
