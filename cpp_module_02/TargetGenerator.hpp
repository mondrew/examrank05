/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 18:19:15 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/17 10:45:15 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGET_GENERATOR_HPP
# define TARGET_GENERATOR_HPP

# include "ATarget.hpp"
# include <string>

class ATarget;

class TargetGenerator {

	private:

		ATarget		**_target_array;
		int			_number_of_targets;

		TargetGenerator(TargetGenerator const &src);
		TargetGenerator		&operator=(TargetGenerator const &rhs);

	public:

		TargetGenerator(void);
		~TargetGenerator(void);

		void		learnTargetType(ATarget *target);
		void		forgetTargetType(std::string const &target);
		ATarget		*createTarget(std::string const &target);
};

#endif
