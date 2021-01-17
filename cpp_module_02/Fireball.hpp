/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 00:46:02 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/17 10:43:37 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
# define FIREBALL_HPP

class ASpell;

class Fireball : public ASpell {

	public:

		Fireball(void);
		virtual ~Fireball(void);

		virtual ASpell			*clone(void) const;

};

#endif
