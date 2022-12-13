/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:05:38 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/12 09:30:28 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void    myfun::replace(int l, std::string &s3, std::string s1, std::string s2)
{
    int i = 0;
    int len = s3.length() + (s2.length() - s1.length()) ;
    std::string     newS3;
    
    newS3.resize (len);
    len = s1.length();
    for(; i < l; i++)
        newS3[i] = s3[i];
    len += i;
    for(int k = 0; s2[k]; k++, i++)
        newS3[i] = s2[k];
    for(; s3[len]; i++ , len++)
        newS3[i] = s3[len];
    s3 = newS3;
}