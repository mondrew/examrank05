/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 22:27:36 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/13 00:42:39 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include <iostream>
#include <string>

Warlock::Warlock(void) {

	this->_spell_array = 0;
	this->_number_of_spells = 0;

	return ;
}

Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title) {

	std::cout << this->getName() << ": This looks like another boring day." << std::endl;

	this->_spell_array = 0;
	this->_number_of_spells = 0;

	return ;
}

Warlock::Warlock(Warlock const &src) {

	*this = src;

	return ;
}

Warlock::~Warlock(void) {

	int		i = 0;

	std::cout << this->_name << ": My job here is done!" << std::endl;

	while (i < this->_number_of_spells)
	{
		delete this->_spell_array[i];
		i++;
	}
	delete [] this->_spell_array;

	return ;
}

Warlock				&Warlock::operator=(Warlock const &rhs) {

	int		i = 0;

	this->_name = rhs.getName();
	this->_title = rhs.getTitle();

	this->_number_of_spells = rhs._number_of_spells;

	this->_spell_array = new ASpell *[rhs._number_of_spells];
	while (i < this->_number_of_spells)
	{
		this->_spell_array[i] = rhs._spell_array[i]->clone();
		i++;
	}

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

void				Warlock::learnSpell(ASpell *spell) {

	int		i = 0;

	ASpell		**big = new ASpell *[this->_number_of_spells + 1];

	while (i < this->_number_of_spells)
	{
		big[i] = this->_spell_array[i];
		i++;
	}
	big[i] = spell->clone();

	this->_number_of_spells++;

	delete [] this->_spell_array;

	this->_spell_array = big;
}

void				Warlock::forgetSpell(std::string const &spell) {

	int		i = 0;
	int		j = 0;
	int		idx = 0;

	while (idx < this->_number_of_spells)
	{
		if ( (this->_spell_array[idx]->getName()).compare(spell) == 0)
			break ;
		idx++;
	}
	if (idx == this->_number_of_spells)
		return ;

	ASpell	**small = new ASpell *[this->_number_of_spells - 1];

	while (i < this->_number_of_spells)
	{
		if (i != idx)
		{
			small[j] = this->_spell_array[i];
			j++;
		}
		i++;
	}

	this->_number_of_spells--;

	delete [] this->_spell_array;
	this->_spell_array = small;
}

void				Warlock::launchSpell(std::string const &spell, ATarget const &target){

	int		idx = 0;

	while (idx < this->_number_of_spells)
	{
		if ( (this->_spell_array[idx]->getName()).compare(spell) == 0)
			break ;
		idx++;
	}
	if (idx == this->_number_of_spells)
		return ;

	target.getHitBySpell(*this->_spell_array[idx]);
}
