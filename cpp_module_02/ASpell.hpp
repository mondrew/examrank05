/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 22:48:37 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/17 10:35:44 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include "ATarget.hpp"
# include <string>

class ATarget;

class ASpell {

	protected:

		std::string		_name;
		std::string		_effects;

	public:

		ASpell(void);
		ASpell(std::string const &name, std::string const &effents);
		ASpell(ASpell const &src);
		virtual ~ASpell(void);

		ASpell					&operator=(ASpell const &rhs);

		std::string				getName(void) const;
		std::string				getEffects(void) const;

		virtual ASpell			*clone(void) const = 0;

		void					launch(ATarget const &target);
};

#endif
