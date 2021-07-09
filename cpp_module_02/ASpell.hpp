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
