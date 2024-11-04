/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Server.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:07:30 by fvonsovs          #+#    #+#             */
/*   Updated: 2024/11/04 16:45:34 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>
#include <string>


class Server
{
	private:
		const std::string _port;
		const std::string _pass;

		Server();
		Server(const Server &src);

	public:
		Server(const std::string &port, const std::string &pass);
		~Server();

};

