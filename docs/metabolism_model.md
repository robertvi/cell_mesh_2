## Aims
The metabolism model part of CellMesh2 provides a simple accounting system for matter and energy, allowing the total mass in the system to be conserved and for energy to enter the system through photosynthesis, to pass between cells via feeding etc and to leave it through various loss mechanisms. Because cells are not a fixed size we cannot simply impose a maximum number of cell to get a mass limit. We want different cellular structures to have different energetic costs, therefore energy consumption must also be accounted for.

## The Basic Model
Cellular structures are built up from a "monomer" chemical building block, represented by the symbol `M`, which is the model's unit of mass. This is present free in the environment rather like carbon dioxide, is captured by cells doing photosynthesis and stores the light's energy by entering an "activated" state, denoted `M*`, without changing its mass. An active monomer therefore stores the energy content of a single photon which is the model's unit of energy. Active monomer is the building block used to construct all the structures of the cell, and each active monomer added to a structure uses up its stored energy in the process. Therefore when structures are broken back down they only release base monomer, not the active form.

Active monomer also acts as the energy currency of the cell, whereby its conversion back into base monomer provides the energy required to power all cellular processes. Cells not performing photosynthesis themselves must obtain active monomer from other cells as their energy source, and must excrete base monomer as waste back into the environment.

## Photosynthesis Reaction
In this reaction a base monomer and a photon convert into an active monomer:

 M + photon &rarr; M*

## Monomer Decay
An active monomer can spontaneously decay into a base monomer:

 M* &rarr; M

## Organelle Growth
An organelle, denoted `O`, initially containing `n` monomers and therefore having a mass of `n` units, consumes one active monomer and increases its mass by one unit:

  O<sub>n</sub> + M* &rarr; O<sub>n+1</sub>

where `n >= 0`.

## Organelle Decay
An organelle can decay by releasing a single monomer:

  O<sub>n</sub> &rarr; O<sub>n-1</sub> + M

where `n >= 1`.

## Monomer Management and Sensing
Cells are assumed to have separate compartments for base and active monomer and to be able to deliver active or base monomer to any organelle that requires it through a transport system. Therefore the concentration of available base and active monomer do not vary as such. However the cell needs to be able to sense how much of the monomers it has, therefore internal sensory inputs should be provided giving the absolute amount or the amount relative to the cell's total volume.