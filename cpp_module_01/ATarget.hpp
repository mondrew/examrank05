/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:00:05 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/13 00:27:25 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include "ASpell.hpp"
# include <string>

class ASpell;

class ATarget {

	protected:

		std::string		_type;

	public:

		ATarget(void);
		ATarget(std::string const &type);
		ATarget(ATarget const &src);
		virtual ~ATarget(void);

		ATarget				&operator=(ATarget const &rhs);

		std::string const	&getType(void) const;

		virtual ATarget				*clone(void) const = 0;

		void				getHitBySpell(ASpell const &spell) const;
};

#endif
