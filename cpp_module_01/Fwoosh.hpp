/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:13:13 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/13 00:35:43 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
# define FWOOSH_HPP

class ASpell;

class Fwoosh : public ASpell {

	public:

		Fwoosh(void);
		//Fwoosh(Fwoosh const &src);
		//virtual ~Fwoosh(void);

		//Fwoosh					&operator=(Fwoosh const &rhs);

		virtual ASpell			*clone(void) const;

};

#endif
