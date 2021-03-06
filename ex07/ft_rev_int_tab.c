/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soilee <soilee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 16:57:43 by soilee            #+#    #+#             */
/*   Updated: 2020/07/11 17:37:39 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int arr_len;
	int temp;

	i = 0;
	arr_len = size - 1;
	while (i < arr_len)
	{
		temp = tab[i];
		tab[i] = tab[arr_len];
		tab[arr_len] = temp;
		i++;
		arr_len--;
	}
}
