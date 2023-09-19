/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:00:58 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/19 19:00:59 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
public:
    Zombie();
    Zombie( std::string zName );
    ~Zombie();

    // Add your member functions and variables here
    void announce( void );
private:
    std::string name;
};

Zombie* zombieHorde( int N, const char* name );

#endif // ZOMBIE_HPP