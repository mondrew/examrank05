#include "ASpell.hpp"
#include "Fwoosh.hpp"
#include <string>

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed") {

	return ;
}

Fwoosh::~Fwoosh(void) {

	return ;
}

ASpell		*Fwoosh::clone(void) const {

	ASpell	*ret = new Fwoosh();

	return (ret);
}
