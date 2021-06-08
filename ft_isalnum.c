/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbray <jbray@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 09:44:08 by jbray             #+#    #+#             */
/*   Updated: 2021/06/01 09:44:08 by jbray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)

{
    if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <='9')
        return(1);
    else
        return(0);
}

#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])

{
    int str='S';

    if(ft_isalnum(str))
    {
        printf("ok c est bon",str);
    }else{
        printf("non ce n'est pas bon",str);
    }

    return 0;
}

