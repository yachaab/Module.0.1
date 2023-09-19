/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:00:45 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/19 19:00:46 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
public:
    Zombie( std::string zName );
    ~Zombie();

    // Add your member functions and variables here
    void announce( void );
private:
    std::string name;
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif // ZOMBIE_HPP