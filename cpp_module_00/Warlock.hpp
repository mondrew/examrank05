/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 22:21:22 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/12 22:35:50 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>

class Warlock {

	private:

		std::string		_name;
		std::string		_title;

		Warlock(void);
		Warlock(Warlock const &src);

		Warlock		&operator=(Warlock const &rhs);

	public:

		Warlock(std::string const &name, std::string const &title);
		~Warlock(void);

		std::string const	&getName(void) const;
		std::string const	&getTitle(void) const;

		void				setTitle(std::string const &title);

		void				introduce(void) const;

};

#endif
