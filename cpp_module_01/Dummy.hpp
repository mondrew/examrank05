/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:26:00 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/13 00:43:13 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP

class ATarget;

class Dummy : public ATarget {

	public:

		Dummy(void);
		// Dummy(std::string const &type);
		// Dummy(Dummy const &src);
		// virtual ~Dummy(void);

		// Dummy				&operator=(Dummy const &rhs);

		virtual ATarget		*clone(void) const;
};

#endif
