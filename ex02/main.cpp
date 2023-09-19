/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:01:10 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/19 19:01:11 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    std::string brain ( "HI THIS IS BRAIN" );
    std::string* stringPTR (&brain);
    std::string& stringREF (brain);

    std::cout << &brain     << " : " << brain << '\n';
    std::cout << stringPTR  << " : " << *stringPTR << '\n';
    std::cout << &stringREF << " : " << stringREF << '\n';
    return 0;
}
