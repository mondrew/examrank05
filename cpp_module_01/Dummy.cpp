/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:29:42 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/13 00:43:00 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include "Dummy.hpp"
#include <string>

Dummy::Dummy(void) : ATarget("Target Practice Dummy") {

	return ;
}

ATarget		*Dummy::clone(void) const {

	ATarget		*ret = new Dummy();

	return (ret);
}
