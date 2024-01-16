/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:37:58 by gcot              #+#    #+#             */
/*   Updated: 2023/09/16 13:06:44 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <string>
# include <iostream>

class Contact {

public :
	Contact (void);
	void Set_Contact (std::string n_first_name, std::string n_last_name, std::string n_nickname, std::string n_phone, std::string n_secret);
	void Show_contact (void);
	void Index_contact (int index);
	~Contact (void);

private :
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone;
	std::string secret;

};

#endif
