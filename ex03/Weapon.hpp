/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:01:33 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/23 00:07:38 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
private:
    std::string type;

public:
    Weapon( std::string wType );
    const std::string& getType();
    void setType( std::string Type );
    ~Weapon();
};

#endif