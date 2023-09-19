/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:00:36 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/19 19:00:37 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string zName ) : name ( zName )
{
    // *Zombie* e = this;
    // *e->announce();

    // *Zombie& r = *this;
    // *r.announce();
    return ;
}

Zombie::~Zombie() { std::cout << this->name << std::endl; return; }

void Zombie::announce()
{
    std::cout << name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}
