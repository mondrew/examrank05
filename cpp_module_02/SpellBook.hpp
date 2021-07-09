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
