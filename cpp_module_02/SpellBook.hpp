/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 00:53:03 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/13 00:57:56 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELL_BOOK_HPP
# define SPELL_BOOK_HPP

class SpellBook {

	public:

		SpellBook(void);
		SpellBook(SpellBook const &src);
		~SpellBook(void);

		SpellBook	&operator=(SpellBook const &rhs);

		void		learnSpell(ASpell *spell); // COPIES the spell in the book
		void		forgetSpell(std::string const &spell); // deletes the spell from the book
		ASpell		*createSpell(std::string const &spell);
};

#endif
