/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:29:42 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/17 10:37:16 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include "Dummy.hpp"
#include <string>

Dummy::Dummy(void) : ATarget("Target Practice Dummy") {

	return ;
}

Dummy::~Dummy(void) {

	return ;
}

ATarget		*Dummy::clone(void) const {

	ATarget		*ret = new Dummy();

	return (ret);
}
