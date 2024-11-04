/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Server.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:39:35 by fvonsovs          #+#    #+#             */
/*   Updated: 2024/11/04 16:45:47 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Server.hpp"

// constructors / destructors

Server::Server(const std::string &port, const std::string &pass): _port(port), _pass(pass) {}

Server::~Server() {}


