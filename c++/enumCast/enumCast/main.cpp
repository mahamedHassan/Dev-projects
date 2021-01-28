//
//  main.cpp
//  enumCast
//
//  Created by Mahamed Hassan on 12/20/20.
//

#include <iostream>

int main() {
    
    enum class Color { Red, Orange, Yellow, Green, violet};
    std::cout <<  static_cast<int>(Color::Orange)<<" , "
                << static_cast<int>(Color::Green) <<'\n';
   
}
