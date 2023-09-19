/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:01:18 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/19 19:01:19 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
public:
    HumanA( std::string hName,  Weapon& wType );
    ~HumanA();
    // Add your member functions and variables here
    void attack() const;

private:
    std::string name;
    Weapon& type;
};

#endif // HUMANA_HPP