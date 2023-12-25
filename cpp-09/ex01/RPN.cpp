/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 16:00:55 by aalami            #+#    #+#             */
/*   Updated: 2023/12/24 23:38:29 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool isOperator(std::string &token)
{
    if (token.compare("+") && token.compare("-") && token.compare("*") && token.compare("/"))
        return false;
    return true;
}
bool isNumericToken(std::string &token)
{
    for(size_t i = 0; i < token.size(); i++)
    {
        if (i == 0 && token[i] == '-')
            continue;
        else if (!isdigit(token[i]))
            return false ;
    }
    return true;
}
bool isValidToken(std::list<std::string> tokenList)
{
    std::string first = tokenList.front();
    if ((tokenList.size() == 1 ||  tokenList.size() == 2))
        return (isNumericToken(first) && !isOperator(first));
    else if (!isNumericToken(first))
        return (isOperator(first));
    return true;
}
double operateTokens(std::list<std::string> &tokenList, std::stack<double> &myStack)
{
    // long result;
    double leftOperand;
    double rightOperand;
    if (myStack.size() < 2)
        throw "RPN Notation invalid";
    
    rightOperand = myStack.top();
    myStack.pop();
    leftOperand = myStack.top();
    myStack.pop();
    
    if (!tokenList.front().compare("+"))
        return (leftOperand + rightOperand);
    else if (!tokenList.front().compare("-"))
        return (leftOperand - rightOperand);
    else if (!tokenList.front().compare("*"))
        return (leftOperand * rightOperand);
    else
    {
        if (rightOperand == 0)
            throw "Error: Division by zero!";
    }
    return (leftOperand / rightOperand);
    
}
void getResult(std::stringstream &stringStream)
{
    std::stack<double> myStack;
    std::list<std::string> tokenList;
    std::string token;
    double result;
    size_t first;
    
    int i = 0;
    while (getline(stringStream, token, ' '))
    {
        first = token.find_first_not_of(" \t");
        if (first == std::string::npos)
            continue;
        tokenList.push_front(token);
        if (token.empty() || !isValidToken(tokenList))
            throw "RPN Notation invalid";
        else if (!isOperator(token))
            myStack.push(atof(token.c_str()));
        else
        {
            if (myStack.empty())
                throw "RPN Notation invalid";
            result = operateTokens(tokenList, myStack);
            myStack.push(result);   
        }
        i++;
    }
    if (myStack.size() != 1 || i == 1)
        throw "RPN Notation invalid";
    std::cout<<result<<std::endl;
    // list_iterator it = tokenList.end();
    // --it;
    // for (it = --tokenList.end(); it != --tokenList.begin(); it --)
    //     std::cout<<*it<<"  ";
    // std::cout<<std::endl;
        
}