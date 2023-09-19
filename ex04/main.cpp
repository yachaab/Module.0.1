/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:24:53 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/19 15:42:19 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.h"

string outfile( string filename )
{
    string out ( "" );

	out = "./" + filename.append( ".replace" );
    return ( out );
}

int main( int argc, char *argv[] )
{
	if ( argc != 4 )
	{
		std::cout << "Usage: <file name> <string> <string>\n";
		return ( 0 );
	}
	else
	{
		Sed obj( argv[1], argv[2], argv[3], outfile( argv[1] ) );
		obj.processing();
	}
    return ( 0 );
}