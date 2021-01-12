/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 00:50:57 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/13 00:51:33 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

class ATarget;

class BrickWall : public ATarget {

	public:

		BrickWall(void);
		// BrickWall(std::string const &type);
		// BrickWall(BrickWall const &src);
		// virtual ~BrickWall(void);

		// BrickWall				&operator=(BrickWall const &rhs);

		virtual ATarget		*clone(void) const;
};

#endif
