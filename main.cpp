/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:06:57 by fvonsovs          #+#    #+#             */
/*   Updated: 2024/11/04 16:46:13 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Server.hpp"

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cerr << "Error: No input provided" << std::endl;
        return 1;
	}

	Server server(argv[1], argv[2]);
}