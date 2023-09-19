/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:01:24 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/19 19:01:25 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon* type;

public:
    HumanB( std::string hName );
    ~HumanB();
    void attack() const;
    void setWeapon(Weapon& wType);
};

#endif