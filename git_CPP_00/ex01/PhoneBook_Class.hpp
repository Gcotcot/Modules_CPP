/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:13:19 by gcot              #+#    #+#             */
/*   Updated: 2023/09/14 13:50:19 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact_Class.hpp"
# include <iostream>

class PhoneBook {

public :
	PhoneBook(void);
	~PhoneBook(void);
	void Add_contact(void);
	void Search_contact(void);
	void Show_book(void);
	void Line_separator(void);
	int Show_nb_contact(void);

private :
	Contact contact[8];
	int nb_contact;
};

#endif
