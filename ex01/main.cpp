/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:00:52 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/23 00:04:53 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    int N (4);

    Zombie* objs ( zombieHorde( N, "name" ) );
    if (!objs)
        return (1);

    for (int i = 0; i < N; ++i) {
        objs[ i ].announce();
    }

    delete[] objs;

    return 0;
}
