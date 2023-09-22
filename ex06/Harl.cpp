/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:01:58 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/23 00:11:22 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()  { return ; }

Harl::~Harl() { return ; }

void Harl::debug()   { std::cout << "[ DEBUG ]\nI love having extra bacon."   								<< std::endl; }

void Harl::info()    { std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money."		<< std::endl; }

void Harl::warning() { std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free."		<< std::endl; }

void Harl::error()   { std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now."	<< std::endl; }

void Harl::complain( std::string level )
{
	std::string levels[ 4 ] = { "debug", "info", "warning", "error" };
	
	void ( Harl::*point[ 4 ] )() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };;

	int i (0);

	for ( i = 0; i < 4; ++i )
	{
		if ( level.compare(levels[ i ]) == 0 )
		{
			for ( int j = i; j < 4; ++j )
			{
				( this->*point[ j ] )();
			}
			break ;
		}
	}
	if ( i >= 4 )
		std::cout << "invalid argument" << std::endl;
}