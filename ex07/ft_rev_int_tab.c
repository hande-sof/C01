/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soilee <soilee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 16:57:43 by soilee            #+#    #+#             */
/*   Updated: 2020/07/11 17:31:50 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int rev_len;
	int temp;

	i = 0;
	rev_len = size - 1;
	while (i < rev_len)
	{
		temp = tab[i];
		tab[i] = tab[rev_len];
		tab[rev_len] = temp;
		i++;
		rev_len--;
	}
}
