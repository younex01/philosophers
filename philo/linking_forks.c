/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linking_forks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:00:14 by yelousse          #+#    #+#             */
/*   Updated: 2022/08/28 05:49:12 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	link_forks(t_philo *philo)
{
	t_philo	*courant_philo;
	t_philo	*next_philo;
	int		i;

	i = 0;
	if (!philo)
		return ;
	if (philo->data->nb_of_philo < 2)
		return ;
	while (i < philo->data->nb_of_philo)
	{
		courant_philo = philo + i;
		if (i == philo->data->nb_of_philo - 1)
		next_philo = philo;
		else
			next_philo = philo + i + 1;
		courant_philo->next_fork = &next_philo->fork;
		i++;
	}
}
