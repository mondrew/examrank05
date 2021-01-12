/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:16:57 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/13 00:36:22 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "Fwoosh.hpp"
#include <string>

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed") {

	return ;
}

/*
Fwoosh::Fwoosh(std::string const &name, std::string const &effects) : ASpell(name, effects) {

	return ;
}

Fwoosh::Fwoosh(Fwoosh const &src) : ASpell(src) {

	return ;
}

Fwoosh::~Fwoosh(void) {

	return ;
}

Fwoosh		&Fwoosh::operator=(Fwoosh const &rhs) {

	ASpell::operator=(rhs);

	return (*this);
}
*/

ASpell		*Fwoosh::clone(void) const {

	ASpell	*ret = new Fwoosh();

	return (ret);
}
