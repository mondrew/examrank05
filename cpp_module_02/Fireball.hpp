#ifndef FIREBALL_HPP
# define FIREBALL_HPP

class ASpell;

class Fireball : public ASpell {

	public:

		Fireball(void);
		virtual ~Fireball(void);

		virtual ASpell			*clone(void) const;

};

#endif
