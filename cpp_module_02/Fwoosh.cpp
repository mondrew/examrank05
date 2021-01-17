/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:16:57 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/17 10:37:45 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "Fwoosh.hpp"
#include <string>

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed") {

	return ;
}

Fwoosh::~Fwoosh(void) {

	return ;
}

ASpell		*Fwoosh::clone(void) const {

	ASpell	*ret = new Fwoosh();

	return (ret);
}
