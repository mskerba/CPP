/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:45:37 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/16 16:23:48 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void    myfun::replace(std::string &s3, std::string s2, std::string s1)
{
    int l = s3.find(s1);
    while(l != -1)
    {
        s3.erase(l, s1.length());
        s3.insert(l, s2);
        l = s3.find(s1, l + s2.length());
    }
}