/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:26:00 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/17 10:36:40 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP

class ATarget;

class Dummy : public ATarget {

	public:

		Dummy(void);
		virtual ~Dummy(void);

		virtual ATarget		*clone(void) const;
};

#endif
