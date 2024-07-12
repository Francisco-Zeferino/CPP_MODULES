/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:15:13 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/07/12 14:19:07 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(){
    Data *data = new Data();
    data->stringValue = "Hello, World!";
    uintptr_t serializedData = Serializer::serialize(data);
    std::cout << serializedData << std::endl;
    Data *deserializedData = Serializer::deserialize(serializedData);
    std::cout << deserializedData->stringValue << std::endl;
    return 0;
}