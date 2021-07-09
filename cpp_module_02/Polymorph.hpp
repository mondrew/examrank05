#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

class ASpell;

class Polymorph : public ASpell {

	public:

		Polymorph(void);
		virtual ~Polymorph(void);

		virtual ASpell			*clone(void) const;

};

#endif
