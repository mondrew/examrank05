#include "ATarget.hpp"
#include <iostream>
#include <string>

ATarget::ATarget(void) {

	return ;
}

ATarget::ATarget(std::string const &type) : _type(type) {

	return ;
}

ATarget::ATarget(ATarget const &src) {

	*this = src;
}

ATarget::~ATarget(void) {

	return ;
}

ATarget				&ATarget::operator=(ATarget const &rhs) {

	this->_type = rhs.getType();

	return (*this);
}

std::string const	&ATarget::getType(void) const {

	return (this->_type);
}

void				ATarget::getHitBySpell(ASpell const &spell) const {

	std::cout << this->getType() << " has been " << spell.getEffects() << "!" << std::endl;
}
