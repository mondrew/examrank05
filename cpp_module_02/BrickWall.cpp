/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 00:51:49 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/17 10:43:17 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include "BrickWall.hpp"
#include <string>

BrickWall::BrickWall(void) : ATarget("Inconspicuous Red-brick Wall") {

	return ;
}

BrickWall::~BrickWall(void) {

	return ;
}

ATarget		*BrickWall::clone(void) const {

	ATarget		*ret = new BrickWall();

	return (ret);
}
