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

#include "RPN.hpp"
/*
int countDigit(long long n)
{
    if (n/10==0)
        return 1;
    return (1 + countDigit(n/10));
}

while (val != 0)
{
    operands.push(val / std::pow(10, countDigit(val) - 1));
    val = val % (int)std::pow(10, countDigit(val) - 1);
}
*/

std::string evaluate_rpn(std::string str)
{
    std::stack<int> operands;
    std::istringstream iss(str);
    std::string token;
    
    while (iss >> token) {
        if (isdigit(token[0]))
        {
            int val;

            val = atoi(token.c_str());
            if (val >= 10)
            {
                operands.push(val / 10);
                operands.push(val % 10);
            }
            else 
                operands.push(atoi(token.c_str()));
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