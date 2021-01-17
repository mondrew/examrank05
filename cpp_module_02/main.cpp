/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 19:03:34 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/14 22:07:20 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include "BrickWall.hpp"
#include "Polymorph.hpp"
#include "TargetGenerator.hpp"
#include "Fireball.hpp"
#include "ATarget.hpp"

int		main(void)
{
	Warlock				richard("Richard", "foo");
	richard.setTitle("Hello, I'm Richard the Warlock!");

	BrickWall			model1;

	Polymorph			*polymorph = new Polymorph();
	TargetGenerator		tarGen;

	tarGen.learnTargetType(&model1);
	richard.learnSpell(polymorph);

	Fireball			*fireball = new Fireball();

	richard.learnSpell(fireball);

	ATarget				*wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

	richard.introduce();
	richard.launchSpell("Polymorph", *wall);
	richard.launchSpell("Fireball", *wall);

	delete polymorph;
	delete fireball;
	delete wall;
}
