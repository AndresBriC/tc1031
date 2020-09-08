//
//  Persona.hpp
//  ordenamiento_generico
//
//  Created by Vicente Cubells Nonell on 04/09/20.
//  Copyright © 2020 Vicente Cubells Nonell. All rights reserved.
//

#ifndef Persona_hpp
#define Persona_hpp

#include <iostream>

class Persona {
private:
    std::string nombre;
    int edad;
    
    char criterio = 'n'; // 'n' -> nombre. 'e' -> edad
    
public:
    Persona():Persona("",0) {}
    Persona(std::string _nombre, int _edad) : nombre(_nombre), edad(_edad) {}
    
    void setCriterio(char value)
    {
        criterio = value;
    }
    
    bool operator<(Persona & persona);
    bool operator>(Persona & persona);
    
    friend std::ostream & operator<<(std::ostream & os, const Persona & persona);
};

#endif /* Persona_hpp */
