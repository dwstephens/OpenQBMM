/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | Copyright (C) 2016-2017 Alberto Passalacqua
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is derivative work of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

Class
    Foam::momentGenerationSubModels::noMomentGeneration

Description
    Moments are read directly from the dictionary to create the moment fields

SourceFiles
    noMomentGeneration.C

\*---------------------------------------------------------------------------*/

#ifndef none_H
#define none_H

#include "momentGenerationModel.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{
namespace momentGenerationSubModels
{

/*---------------------------------------------------------------------------*\
                        Class noMomentGeneration Declaration
\*---------------------------------------------------------------------------*/

class noMomentGeneration
:
    public momentGenerationModel
{
public:

        //- Runtime type information
        TypeName("noMomentGeneration");


    // Constructors

        //- Construct from components
        noMomentGeneration
        (
            const dictionary& dict,
            const label nNodes,
            const bool extended,
            const bool radau
        );


    //- Destructor
    virtual ~noMomentGeneration();


    // Public member functions

        //- Update quadrature given a dictionary
        virtual void updateQuadrature(const dictionary&);
};


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace momentGenerationSubModels
} // End namespace Foam

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

#endif

// ************************************************************************* //
