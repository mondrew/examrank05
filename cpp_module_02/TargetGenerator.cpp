#include "TargetGenerator.hpp"
#include "ATarget.hpp"
#include <string>

TargetGenerator::TargetGenerator(void) : _target_array(0), _number_of_targets(0) {

	return ;
}

TargetGenerator::~TargetGenerator(void) {

	int		i = 0;

	while (i < this->_number_of_targets)
	{
		delete this->_target_array[i];
		i++;
	}

	if (this->_target_array)
		delete [] this->_target_array;

	return ;
}

void		TargetGenerator::learnTargetType(ATarget *target) {

	int			i = 0;

	if (target == 0) // !!!
		return ;

	while (i < this->_number_of_targets) // !!!
	{
		if (this->_target_array[i]->getType().compare(target->getType()) == 0)
			return ;
		i++;
	}

	i = 0;

	ATarget		**tmp = new ATarget*[this->_number_of_targets + 1];

	while (i < this->_number_of_targets)
	{
		tmp[i] = this->_target_array[i];
		i++;
	}

	tmp[i] = target->clone();

	this->_number_of_targets++;

	if (this->_target_array) // !!!
		delete [] this->_target_array;

	this->_target_array = tmp;
}

void		TargetGenerator::forgetTargetType(std::string const &target) {

	int		i = 0;
	int		j = 0;
	int		idx = 0;

	while (idx < this->_number_of_targets)
	{
		if (this->_target_array[idx]->getType().compare(target) == 0)
			break ;
		idx++;
	}

	if (idx == this->_number_of_targets)
		return ;

	if (this->_number_of_targets == 1)
	{
		delete this->_target_array[0];
		delete [] this->_target_array;
		this->_target_array = 0;

		this->_number_of_targets = 0;

		return ;
	}

	ATarget		**tmp = new ATarget*[this->_number_of_targets - 1];

	while (i < this->_number_of_targets)
	{
		if (i != idx)
		{
			tmp[j] = this->_target_array[i];
			j++;
		}
		i++;
	}

	this->_number_of_targets--;

	if (this->_target_array)
		delete [] this->_target_array;
	this->_target_array = tmp;
}

ATarget		*TargetGenerator::createTarget(std::string const &target) {

	int		i = 0;

	while (i < this->_number_of_targets)
	{
		if (this->_target_array[i]->getType().compare(target) == 0)
			break ;
		i++;
	}

	if (i == this->_number_of_targets)
		return (0);

	return (this->_target_array[i]->clone());
}
