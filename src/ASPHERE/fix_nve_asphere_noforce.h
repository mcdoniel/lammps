/* ----------------------------------------------------------------------
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   http://lammps.sandia.gov, Sandia National Laboratories
   Steve Plimpton, sjplimp@sandia.gov

   Copyright (2003) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under 
   the GNU General Public License.

   See the README file in the top-level LAMMPS directory.
------------------------------------------------------------------------- */

#ifdef FIX_CLASS

FixStyle(nve/asphere/noforce,FixNVEAsphereNoforce)

#else

#ifndef LMP_FIX_NVE_ASPHERE_NOFORCE_H
#define LMP_FIX_NVE_ASPHERE_NOFORCE_H

#include "fix_nve_noforce.h"

namespace LAMMPS_NS {

class FixNVEAsphereNoforce : public FixNVENoforce {
 public:
  FixNVEAsphereNoforce(class LAMMPS *, int, char **);
  void initial_integrate(int);
  void init();
  
 private:
  double dtq;
  class AtomVecEllipsoid *avec;
};

}

#endif
#endif
