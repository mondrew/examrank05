/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 22:27:36 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/12 22:43:58 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include <iostream>
#include <string>

Warlock::Warlock(void) {

	return ;
}

Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title) {

	std::cout << this->getName() << ": This looks like another boring day." << std::endl;

	return ;
}

Warlock::Warlock(Warlock const &src) {

	*this = src;

	return ;
}

Warlock::~Warlock(void) {

	std::cout << this->_name << ": My job here is done!" << std::endl;

	return ;
}

Warlock				&Warlock::operator=(Warlock const &rhs) {

	this->_name = rhs.getName();
	this->_title = rhs.getTitle();

	return (*this);
}

std::string const	&Warlock::getName(void) const {

	return (this->_name);
}

std::string const	&Warlock::getTitle(void) const {

	return (this->_title);
}

void				Warlock::setTitle(std::string const &title) {

	this->_title = title;

	return ;
}

void				Warlock::introduce(void) const {

	std::cout << this->_name << ": I am " << this->_name << ", ";
	std::cout << this->_title << "!" << std::endl;
}
