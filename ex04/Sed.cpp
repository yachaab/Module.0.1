/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:24:43 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/23 00:09:06 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.h"

Sed::Sed() { return ; }

Sed::Sed( const char* inFile, const char* target, const char* replace, string outFile )
	: in( inFile ), s1 ( target ), s2 ( replace ), out( outFile.c_str() ) { return ; }

Sed::~Sed() { return ; }

void alterLine( string& line, size_t pos, const string& target, const string& replace )
{
	size_t targetSize ( target.length() );
	line.erase( pos, targetSize );
	line.insert( pos, replace );
	return ;
}

void Sed::processing()
{
	if (!in.is_open() || !out.is_open())
	{
		std::cout << "Error: open file\n";
		return ;
	}
	string line;
	string result;
	size_t pos = 0;
	while ( std::getline(in, line) )
	{
		for ( size_t i = 0; i < line.length(); ++i )
		{
			pos = line.find( s1, i );
			if ( pos != string::npos )
			{
				alterLine( line, pos, s1, s2 );
				i = pos + std::strlen(s2) - 1;
			}
		}
		result += line + '\n';
	}
	out << result;
	return ;
}