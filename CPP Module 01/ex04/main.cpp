/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 08:27:35 by mskerba           #+#    #+#             */
/*   Updated: 2022/12/14 12:04:43 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

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
        if (!s1.length() || !s2.length())
        {        
            filereplace << s3;
            file.close();
            filereplace.close();
            return (0);   
        }
        int l = s3.find(s1);
        while(l != -1)
        {
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