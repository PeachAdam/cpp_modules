/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:52:54 by yaysu             #+#    #+#             */
/*   Updated: 2022/10/23 16:38:32 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOKCLASS_HPP
# define PHONEBOOKCLASS_HPP

#include <string>
#include <iostream>
#include <stdlib.h>
#include "ContactClass.hpp"

class Phonebook
{

    public:
        void    addContact(Contact *temp);
        void    displayContacts(int i);
        void    displayInfo(int i);
        void    displayAll(void);
        Phonebook();

    private:
        Contact list[8];
        int     list_size;

};


#endif