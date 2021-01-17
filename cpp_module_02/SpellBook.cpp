/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 17:28:36 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/17 10:48:00 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "SpellBook.hpp"
#include <string>

SpellBook::SpellBook(void) {

	this->_spell_array = 0;
	this->_number_of_spells = 0;

	return ;
}

SpellBook::~SpellBook(void) {

	int		i = 0;

	while (i < this->_number_of_spells)
	{
		delete this->_spell_array[i];
		i++;
	}

	if (this->_spell_array)
		delete [] this->_spell_array;

	return ;
}

void		SpellBook::learnSpell(ASpell *spell) {

	int		i = 0;

	if (spell == 0) // !!!
		return ;

	while (i < this->_number_of_spells) // !!!
	{
		if (this->_spell_array[i]->getName().compare(spell->getName()) == 0)
			return ;
		i++;
	}

	i = 0;

	ASpell	**tmp = new ASpell*[this->_number_of_spells + 1];
	while (i < this->_number_of_spells)
	{
		tmp[i] = this->_spell_array[i];
		i++;
	}
	tmp[i] = spell->clone();

	this->_number_of_spells++;

	if (this->_spell_array) // !!!
		delete [] this->_spell_array;

	this->_spell_array = tmp;
}

void		SpellBook::forgetSpell(std::string const &spell) {

	int		i = 0;
	int		j = 0;
	int		idx = 0;

	while (idx < this->_number_of_spells)
	{
		if ((this->_spell_array[idx]->getName()).compare(spell) == 0)
			break ;
		idx++;
	}

	if (idx == this->_number_of_spells)
		return ;

	if (this->_number_of_spells == 1) // !!!
	{
		delete this->_spell_array[0];
		delete [] this->_spell_array;
		this->_spell_array = 0;
		this->_number_of_spells = 0;

		return ;
	}

	ASpell	**tmp = new ASpell*[this->_number_of_spells - 1];

	while (i < this->_number_of_spells)
	{
		if (i != idx)
		{
			tmp[j] = this->_spell_array[i];
			j++;
		}
		i++;
	}

	this->_number_of_spells--;

	if (this->_spell_array)
		delete [] this->_spell_array;

	this->_spell_array = tmp;
}

ASpell		*SpellBook::createSpell(std::string const &spell) {

	int		i = 0;

	while (i < this->_number_of_spells)
	{
		if (this->_spell_array[i]->getName().compare(spell) == 0)
			break ;
		i++;
	}
	if (i == this->_number_of_spells)
		return (0);

	ASpell	*ret = this->_spell_array[i]->clone();

	return (ret);
}
