/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:31:04 by yaysu             #+#    #+#             */
/*   Updated: 2023/03/24 12:31:21 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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