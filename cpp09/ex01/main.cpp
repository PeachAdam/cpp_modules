/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:19:17 by yaysu             #+#    #+#             */
/*   Updated: 2023/03/20 20:47:50 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
#include <iostream>
#include <stack>
#include <fstream>
#include <sstream>
#include <string>
#include <bits/stdc++.h>
#include <cstdlib>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Errror: Wrong argumants.\n";
        exit (EXIT_FAILURE);
    }

    std::stack<int> s;
    std::string     str;
    char            *temp;

    temp = strtok(argv[1], " ");
    while (temp)
    {
        str += temp;
        temp = strtok(NULL, " ");
    }

    std::cout << str << std::endl;

    for (int i = 0; str[i] != '\0'; i++)
    {
        switch (str[i])
        {
        case '+':
            s.push(s.pop() + s.pop());
            break;
        
        default:
            break;
        }
    }
}*/

#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <stack>

std::string evaluate_rpn(std::string str)
{
    std::stack<int> operands;
    std::istringstream iss(str);
    std::string token;
    
    while (iss >> token) {
        if (isdigit(token[0]))
        {
            operands.push(atoi(token.c_str()));
            if (atoi(token.c_str()) >= 10)
                return "Error";
        }
        else if (token == "+" || token == "-" || token == "*" || token == "/")
        {    
            if (operands.size() < 2)
                return "Error";
            
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();
            int result;
            
            if (token == "+")
                result = operand1 + operand2;
            else if (token == "-")
                result = operand1 - operand2;
            else if (token == "*")
                result = operand1 * operand2;
            else if (token == "/")
            {
                if (operand2 == 0)
                    return "Error";
                result = operand1 / operand2;
            }
            operands.push(result);
        }
    }
    if (operands.size() == 1) {
        std::stringstream ss;
        ss << operands.top();
        return ss.str();
    }
    else 
        return "Error";
}

int main(int argc, char* argv[]) {
    if (argc == 2) 
        std::cout << evaluate_rpn(argv[1]) << std::endl;
    else 
    {
        std::cout << "Error: invalid number of arguments" << std::endl;
        return 1;
    }
    return 0;
}