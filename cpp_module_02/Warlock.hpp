#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include "ASpell.hpp"
# include "SpellBook.hpp"
# include "ATarget.hpp"
# include <string>

class ASpell;
class ATarget;
class SpellBook;

class Warlock {

	private:

		std::string		_name;
		std::string		_title;

		SpellBook		_spellbook;

		Warlock(void);
		Warlock(Warlock const &src);

		Warlock		&operator=(Warlock const &rhs);

	public:

		Warlock(std::string const &name, std::string const &title);
		~Warlock(void);

		std::string const	&getName(void) const;
		std::string const	&getTitle(void) const;

		void				setTitle(std::string const &title);

		void				introduce(void) const;

		void				learnSpell(ASpell *spell);
		void				forgetSpell(std::string const &spell);
		void				launchSpell(std::string const &spell, ATarget const &target);
};

#endif
