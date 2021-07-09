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
