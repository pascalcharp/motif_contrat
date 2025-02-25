//
// Created by Pascal Charpentier on 2025-02-25.
//

#include "Tugabudoire.h"
#include "ContratException.h"

Tugabudoire::Tugabudoire(int init) : piston(init) {
  PRECONDITION(init < 78) ;
  PRECONDITION(init > -5) ;

  INVARIANTS() ;

}

void Tugabudoire::presser() {
  CONDITION_INITIALE(int piston_avant = piston) ;

  piston = (piston + 44) % 78 ;

  INVARIANTS() ;
  POSTCONDITION(piston - piston_avant > 1) ;
}

