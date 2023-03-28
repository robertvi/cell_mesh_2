## Aims
The metabolism model part of CellMesh2 provides a simple accounting system for matter and energy, allowing the total mass in the system to be conserved and for energy to enter the system through photosynthesis, to pass between cells via feeding etc and to leave it through various loss mechanisms.

## The Basic Model
Cellular structures are built up from a "monomer" chemical building block, represented by the symbol `M`, which is the model's unit of mass. This is present free in the environment rather like carbon dioxide, is captured by cells doing photosynthesis and stores the light's energy by entering an "activated" state, denoted `M*`, without changing its mass. An active monomer therefore stores the energy content of a single photon which is the model's unit of energy. Active monomer is the building block used to construct all the structures of the cell, and each active monomer added to a structure uses up its stored energy in the process. Therefore when structures are broken back down they only release base monomer, not the active form. Active monomer also acts as the energy currency of the cell, whereby its conversion back into base monomer provides the energy required to power all cellular processes. Cells not performing photosynthesis themselves must obtain active monomer from other cells as their energy source, and must excrete base monomer as waste back into the environment.

In order to decouple the energetic cost of building a particular structure from its mass we can require greater or fewer active monomers be used than are required to provide its mass. To make it more energetically expensive than its mass we can convert additional actives to base monomers at the time of construction and make it release only base monomers when broken down. Likewise to make it cheaper than its mass we could convert some base monomer to actives at the time of construction or have it breakdown into some proportion of active and base monomer.


## Photosynthesis Reaction
In this reaction a base monomer and a photon convert into an active monomer:

 M + photon &rarr; M*


## Monomer Decay
An active monomer can spontaneously decay into a base monomer:

 M* &rarr; M

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
