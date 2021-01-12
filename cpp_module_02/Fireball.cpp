/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 00:47:09 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/13 00:48:16 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "Fireball.hpp"
#include <string>

Fireball::Fireball(void) : ASpell("Fireball", "burnt to a crisp") {

	return ;
}

/*
Fireball::Fireball(std::string const &name, std::string const &effects) : ASpell(name, effects) {

	return ;
}

Fireball::Fireball(Fireball const &src) : ASpell(src) {

	return ;
}

Fireball::~Fireball(void) {

	return ;
}

Fireball		&Fireball::operator=(Fireball const &rhs) {

	ASpell::operator=(rhs);

	return (*this);
}
*/

ASpell		*Fireball::clone(void) const {

	ASpell	*ret = new Fireball();

	return (ret);
}
