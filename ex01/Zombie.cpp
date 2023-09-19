/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:00:55 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/19 19:00:56 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}
Zombie::Zombie( std::string zName ) : name ( zName ) { return ; }

Zombie::~Zombie() { std::cout << this->name << std::endl; return; }

void Zombie::announce()
{
    std::cout << name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}