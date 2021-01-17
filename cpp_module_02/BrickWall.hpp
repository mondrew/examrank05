/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 00:50:57 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/17 10:42:51 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

class ATarget;

class BrickWall : public ATarget {

	public:

		BrickWall(void);
		virtual ~BrickWall(void);

		virtual ATarget		*clone(void) const;
};

#endif
