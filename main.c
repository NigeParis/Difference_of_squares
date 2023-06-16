/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42_Legin <Nige@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:32:25 by 42_Legin          #+#    #+#             */
/*   Updated: 2023/06/16 11:59:57 by 42_Legin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "difference_of_squares.h"



int	main(void)
{

	printf("\n\nThis is the sum of squares : 1 -> %d", sum_of_squares(1));
	printf("\nThis is the sum of squares : 2 -> %d", sum_of_squares(2));
	printf("\nThis is the sum of squares : 3 -> %d", sum_of_squares(3));
	printf("\nThis is the sum of squares : 4 -> %d", sum_of_squares(4));
	printf("\nThis is the sum of squares : 5 -> %d", sum_of_squares(5));
	printf("\nThis is the sum of squares : 25 -> %d", sum_of_squares(25));


	printf("\n\nThis is the square of sum : 1 -> %d", square_of_sum(1));
	printf("\nThis is the square of sum : 2 -> %d", square_of_sum(2));
	printf("\nThis is the square of sum : 3 -> %d", square_of_sum(3));
	printf("\nThis is the square of sum : 4 -> %d", square_of_sum(4));
	printf("\nThis is the square of sum : 5 -> %d", square_of_sum(5));
	printf("\nThis is the square of sum : 25 -> %d", square_of_sum(25));


	printf("\n\nThis is the difference of squares : 1 -> %d", difference_of_squares(1));
	printf("\nThis is the difference of squares : 2 -> %d", difference_of_squares(2));
	printf("\nThis is the difference of squares : 3 -> %d", difference_of_squares(3));
	printf("\nThis is the difference of squares : 4 -> %d", difference_of_squares(4));
	printf("\nThis is the difference of squares : 5 -> %d", difference_of_squares(5));
	printf("\nThis is the difference of squares : 25 -> %d\n\n", difference_of_squares(25));

	return (0);
}
