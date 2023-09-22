/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHord.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:01:03 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/23 00:03:39 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if ( N <= 0 )
    {
        std::cout << "Bad memory allocation" << std::endl;
        return (NULL);
    }
    Zombie* objArr = new Zombie[ N ];
    for (int i = 0; i < N; ++i) {
       new (&objArr[ i ]) Zombie( name );
    }
    return (objArr);
}
