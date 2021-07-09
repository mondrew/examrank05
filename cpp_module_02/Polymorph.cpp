#include "ASpell.hpp"
#include "Polymorph.hpp"
#include <string>

Polymorph::Polymorph(void) : ASpell("Polymorph", "turned into a critter") {

	return ;
}

Polymorph::~Polymorph(void) {

	return ;
}

ASpell		*Polymorph::clone(void) const {

	ASpell	*ret = new Polymorph();

	return (ret);
}
