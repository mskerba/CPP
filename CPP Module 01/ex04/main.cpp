/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 08:27:35 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/13 13:18:41 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av)
{
    std::ofstream    filereplace;
    std::string     fname;
    std::ifstream    file;
    std::string     s1;
    std::string     s2;
    std::string     s3;

    if(ac == 4)
    {   
        fname = av[1];
        file.open(fname);
        if (!file)
            return (0);
        filereplace.open(fname + ".replace");
        getline (file,s3);
        while (getline (file,s1))
        {
            s3 += "\n";
            s3 += s1;
        }
        s1 = av[2];
        s2 = av[3];
        int l = s3.find(s1);
        while(l != -1)
        { 
            // myfun::replace(l, s3, s1, s2);
            s3.erase(l, s1.length());
            s3.insert(l, s2);
            l = s3.find(s1, l + s2.length());
        }
        filereplace << s3;
        file.close();
        filereplace.close();
    }
    else
        std::cout << "      ***Error in arguments***        ";
    
}