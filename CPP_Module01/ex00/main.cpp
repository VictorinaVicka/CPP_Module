/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 11:24:14 by tfarenga          #+#    #+#             */
/*   Updated: 2020/11/11 14:19:21 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(void)
{
    Pony *start = new Pony("Mark", 15, "black");
	start->names();
	start->years();
	start->colors();
    delete start;
}
void ponyOnTheStack(void)
{
    Pony start("Sten", 30, "grey");
	start.names();
	start.years();
	start.colors();
}

int main(void)
{
    std::cout << "Apply Function On the heap" << std::endl;
    ponyOnTheHeap();
    std::cout << "Apply Function On the stack" << std::endl;
    ponyOnTheStack();
    return (0);
}