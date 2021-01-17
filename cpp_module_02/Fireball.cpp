/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 00:47:09 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/17 10:43:52 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "Fireball.hpp"
#include <string>

Fireball::Fireball(void) : ASpell("Fireball", "burnt to a crisp") {

	return ;
}

Fireball::~Fireball(void) {

	return ;
}

ASpell		*Fireball::clone(void) const {

	ASpell	*ret = new Fireball();

	return (ret);
}
