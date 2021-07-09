#include "ATarget.hpp"
#include "BrickWall.hpp"
#include <string>

BrickWall::BrickWall(void) : ATarget("Inconspicuous Red-brick Wall") {

	return ;
}

BrickWall::~BrickWall(void) {

	return ;
}

ATarget		*BrickWall::clone(void) const {

	ATarget		*ret = new BrickWall();

	return (ret);
}
