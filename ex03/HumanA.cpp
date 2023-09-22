/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:01:15 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/23 00:05:35 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string hName, Weapon& wType ) :
        name ( hName ), type ( wType )
{
    return ;
}

HumanA::~HumanA() { return ; }

void HumanA::attack() const
{
    const std::string club ( type.getType() );

    if (club.empty())
        std::cout << name << ": attacks with their MP40" << std::endl;
    else
        std::cout << name << ": attacks with their " << club << std::endl;
}