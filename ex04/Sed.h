/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 02:36:30 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/23 00:09:17 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_H
# define SED_H
# include <iostream>
# include <fstream>
# include <cstring>
# define string std::string

class Sed
{
private:
	std::ifstream	in;
	const char*	s1;
	const char*	s2;
	std::ofstream	out;

public:
	Sed();
	Sed( const char* inFile, const char* target, const char* replace, string outFile );
	~Sed();
	void processing();
};
#endif