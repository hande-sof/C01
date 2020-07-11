/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soilee <soilee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 17:34:48 by soilee            #+#    #+#             */
/*   Updated: 2020/07/11 17:47:50 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int i;
	int index;
	int arr_len;

	i = 0;
	arr_len = size - 1;
	while (i < size)
	{
		index = 0;
		while (index <= arr_len)
		{
			if (tab[index] > tab[index + 1])
			{
				temp = tab[index + 1];
				tab[index + 1] = tab[index];
				tab[index] = temp;
			}
			index++;
		}
		i++;
	}
}
