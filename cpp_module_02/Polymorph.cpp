/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 00:49:32 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/17 10:44:22 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "Polymorph.hpp"
#include <string>

Polymorph::Polymorph(void) : ASpell("Polymorph", "turned into a critter") {

	return ;
}

Polymorph::~Polymorph(void) {

	return ;
}

ASpell		*Polymorph::clone(void) const {

	ASpell	*ret = new Polymorph();

	return (ret);
}
