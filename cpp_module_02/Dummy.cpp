#include "ATarget.hpp"
#include "Dummy.hpp"
#include <string>

Dummy::Dummy(void) : ATarget("Target Practice Dummy") {

	return ;
}

Dummy::~Dummy(void) {

	return ;
}

ATarget		*Dummy::clone(void) const {

	ATarget		*ret = new Dummy();

	return (ret);
}
