//
// Created by Pascal Charpentier on 2025-02-25.
//

#ifndef TUGABUDOIRE_H
#define TUGABUDOIRE_H

#include "ContratException.h"



class Tugabudoire {
  public :
    explicit Tugabudoire(int init = 9) ;

    void presser() ;


private:

  void verifieInvariant() const {
    INVARIANT(piston > -5) ;
    INVARIANT(piston < 78) ;
  }

  int piston ;

};



#endif //TUGABUDOIRE_H
