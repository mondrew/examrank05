/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:13:13 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/17 10:37:25 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
# define FWOOSH_HPP

class ASpell;

class Fwoosh : public ASpell {

	public:

		Fwoosh(void);
		virtual ~Fwoosh(void);

		virtual ASpell			*clone(void) const;

};

#endif
