## Aims
The metabolism model part of CellMesh2 provides a simple accounting system for matter and energy, allowing the total mass in the system to be conserved and for energy to enter the system through photosynthesis, to pass between cells via feeding and to leave it through various loss mechanisms.

## The Basic Model
Everything is considered to be built up from a monomer chemical building block present in the cells' environment which is captured during photosynthesis and incorporated into dimer and trimer molecules present within the cells. These molecules in turn are used to build up the various structures of the cell called organelles. The organelles can break down releasing monomer, dimer or trimer molecules again. Dimer and trimer can also decay back into monomer.

## Photosynthesis Reaction
In this reaction a dimer, a monomer and a photon convert into a trimer:

 M<sub>2</sub> + M + photon &rarr; M<sub>3</sub>

In this notation M represents a single monomer chemical building block, M<sub>2</sub> means two monomers chemically bonded together into a dimer and M<sub>3</sub> represent three bonded together into a trimer. This is the only reaction where more bonds are created than destroyed, and is only allowed with the absorption of a photon. The new bond stores the photo's energy. All other reactions destroy more bonds than they create.

## Dimer Regeneration
To prevent all the dimer from being exhausted by photosynthesis, we need a reaction to convert trimer back into dimer:

 2 M<sub>3</sub> &rarr; 3 M<sub>2</sub>

## Trimer Decay
Trimer can decay back into dimer and monomer:

 M<sub>3</sub> &rarr; M<sub>2</sub> + M

## Dimer Decay
Dimer can decay back into monomer:

 M<sub>2</sub> &rarr; 2 M

## Organelle Growth
An organelle denoted `O` of mass `n` monomers can be thought of as a linear polymer chain of `n` monomer subunits. To attach one new monomer we must create one new bond, therefore we must also break at least two other bonds in order for the reaction to be allowed, therefore a trimer must be fully broken down and only one monomer added to the organelle:

  O<sub>n</sub> + M<sub>3</sub> &rarr; O<sub>n+1</sub> + 2 M

For simplicity we can allow `n >= 0`, ie the organelle can have zero mass to begin with. Logically if `n=0` there is nothing for the first monomer to be bonded to, but this doesn't violate conservation of mass as such, and avoids the need to define a special purpose reaction to create the very first monomer of the organelle. In effect the first monomer forms a magic bond to nothing.

## Monomer, Dimer and Trimer Release
An organelle can decay to release a single monomer, dimer or trimer:

  O<sub>n</sub> &rarr; O<sub>n-1</sub> + M

where `n >= 1`

  O<sub>n</sub> &rarr; O<sub>n-2</sub> + M<sub>2</sub>

where `n >= 2`

  O<sub>n</sub> &rarr; O<sub>n-3</sub> + M<sub>3</sub>

where `n >= 3`.
