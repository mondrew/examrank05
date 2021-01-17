/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 00:48:40 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/17 10:44:07 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

class ASpell;

class Polymorph : public ASpell {

	public:

		Polymorph(void);
		virtual ~Polymorph(void);

		virtual ASpell			*clone(void) const;

};

#endif
