/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:01:49 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/19 19:01:50 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class Harl
{
private:
	void debug		( void );
	void info		( void );
	void warning	( void );
	void error		( void );

public:
	Harl();
	void complain( std::string level );
	~Harl();
};

#endif // HARL_HPP