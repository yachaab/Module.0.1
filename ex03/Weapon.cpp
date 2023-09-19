/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:01:30 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/19 19:01:31 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string wType) : type (wType) { return ; }

Weapon::~Weapon() { return ; }

const std::string& Weapon::getType() { return (type); }

void Weapon::setType(std::string Type) { this->type = Type; return ; }
