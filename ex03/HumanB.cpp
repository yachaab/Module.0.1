/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:01:21 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/23 00:06:10 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string hName ) : name ( hName ), type ( NULL ) { return ;}

HumanB::~HumanB() { return ; }

void HumanB::attack() const
{
    if (type == NULL)
    {
        std::cout << name << ": not armed" << std::endl;
        return ;
    }
    else
    {
        std::string club (type->getType());
        if (club.empty())
            std::cout << name << ": Not armed" << std::endl;
        else
            std::cout << name << ": attacks with their " << club << std::endl;
    }
    return ;
}

void HumanB::setWeapon(Weapon& wType)
{
    type = &wType;
}