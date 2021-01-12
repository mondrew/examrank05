/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 00:49:32 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/13 00:50:26 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "Polymorph.hpp"
#include <string>

Polymorph::Polymorph(void) : ASpell("Polymorph", "turned into a critter") {

	return ;
}

/*
Polymorph::Polymorph(std::string const &name, std::string const &effects) : ASpell(name, effects) {

	return ;
}

Polymorph::Polymorph(Polymorph const &src) : ASpell(src) {

	return ;
}

Polymorph::~Polymorph(void) {

	return ;
}

Polymorph		&Polymorph::operator=(Polymorph const &rhs) {

	ASpell::operator=(rhs);

	return (*this);
}
*/

ASpell		*Polymorph::clone(void) const {

	ASpell	*ret = new Polymorph();

	return (ret);
}
