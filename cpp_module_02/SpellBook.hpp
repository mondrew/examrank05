/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 00:53:03 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/17 10:44:42 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELL_BOOK_HPP
# define SPELL_BOOK_HPP

# include "ASpell.hpp"
# include <string>

class ASpell;

class SpellBook {

	private:

		ASpell		**_spell_array;
		int			_number_of_spells;

		SpellBook(SpellBook const &src);

		SpellBook	&operator=(SpellBook const &rhs);

	public:

		SpellBook(void);
		~SpellBook(void);

		void		learnSpell(ASpell *spell); // COPIES the spell in the book
		void		forgetSpell(std::string const &spell); // deletes the spell from the book
		ASpell		*createSpell(std::string const &spell);
};

#endif
