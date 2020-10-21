/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 11:29:37 by tfarenga          #+#    #+#             */
/*   Updated: 2020/10/19 18:18:20 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char *argv[])
{
	int i;
	int j;

    i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
            j = 0;
			while (argv[i][j])
				std::cout << (char)toupper(argv[i][j++]);
            i++;
		}
	}
	else
		 std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << "\n";
    return 0;
}
