/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:01:27 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/23 00:07:06 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon( "" );
        HumanA bob( "Bob", club );
        bob.attack();
        club.setType( "AK45" );
        bob.attack();
    }
    {
        Weapon club = Weapon( "crude spiked club" );
        HumanB jim( "Jim" );
        jim.setWeapon( club );
        jim.attack();
        club.setType( "some other type of club" );
        jim.attack();
    }
return 0;
}
