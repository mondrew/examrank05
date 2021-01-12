/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 22:37:22 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/12 22:47:23 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include <iostream>

int		main(void)
{
	Warlock const	richard("Richard", "Mistress of Magma");

	richard.introduce();
	std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

	Warlock			*jack = new Warlock("Jack", "the Long");

	jack->introduce();
	jack->setTitle("the Mighty");
	jack->introduce();

	delete jack;

	return (0);
}
