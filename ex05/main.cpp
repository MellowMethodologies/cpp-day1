/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:24:06 by sbadr             #+#    #+#             */
/*   Updated: 2023/08/25 11:50:47 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl a;
    a.complain("INFO");
    a.complain("DEBUG");
    a.complain("ERROR");
    a.complain("WARNING");
}