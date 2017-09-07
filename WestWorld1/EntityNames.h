#ifndef NAMES_H
#define NAMES_H

#include <string>

enum 
{
  ent_Miner_HuibaeKim,

  ent_Elsa
};

inline std::string GetNameOfEntity(int n)
{
  switch(n)
  {
  case ent_Miner_HuibaeKim:

    return "Miner HuibaeKim";

  case ent_Elsa:
    
    return "Elsa"; 

  default:

    return "UNKNOWN!";
  }
}

#endif