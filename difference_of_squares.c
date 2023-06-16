/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   difference_of_squares.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42_Legin <Nige@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:36:55 by 42_Legin          #+#    #+#             */
/*   Updated: 2023/06/16 11:08:16 by 42_Legin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "difference_of_squares.h"

unsigned int	sum_of_squares(unsigned int number);
unsigned int	square_of_sum(unsigned int number);

/**
*	Main function
*/

unsigned int	difference_of_squares(unsigned int number)
{
	unsigned int	sum_squares;
	unsigned int	square_sum;

	square_sum = square_of_sum(number);
	sum_squares = sum_of_squares(number);
	return (square_sum - sum_squares);
}

/**
*	Helper functions
*/

unsigned int	square_of_sum(unsigned int number)
{
	unsigned int	result;

	result = 1;
	while (number > 1)
	{
			result += number;
			number--;
	}
	result *= result;
	return (result);
}

unsigned int	sum_of_squares(unsigned int number)
{
	unsigned int	result;
	unsigned int	square;

	result = 1;
	square = 0;
	while (number > 1)
	{
			square = number * number;
			result += square;
			number--;
	}
	return (result);
}
