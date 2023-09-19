/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:00:23 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/19 19:00:25 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    {
        // @ classic
        Zombie obj (Zombie( "foo" ));
        obj.announce();
    }

    {
        // @ New Zombie
        Zombie* zObj (newZombie( "name" ));
        zObj->announce();
        delete zObj;
    }

    {
        // @ random Chump
        randomChump( "Chump" );
    }
    return (0);
}
