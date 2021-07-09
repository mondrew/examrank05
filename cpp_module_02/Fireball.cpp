#include "ASpell.hpp"
#include "Fireball.hpp"
#include <string>

Fireball::Fireball(void) : ASpell("Fireball", "burnt to a crisp") {

	return ;
}

Fireball::~Fireball(void) {

	return ;
}

ASpell		*Fireball::clone(void) const {

	ASpell	*ret = new Fireball();

	return (ret);
}
