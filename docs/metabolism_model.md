## Aims
The metabolism part of CellMesh2 provides a simple accounting system for matter and energy, allowing the total mass in the system to be conserved and for energy to enter the system through photosynthesis, to pass between cells via feeding and to leave it through various loss mechanisms.

## The Basic Model
The environment contains a diffusible monomer chemical building block which cells can absorb and build up into polymer chains of any length. The total mass in the system, including as monomer, dimer, trimer and larger forms, is conserved. Free monomer is spread out evenly as a global supply available to all cells, which is consumed when cells bond them together into larger molecules and increases when those larger molecules are broken down again. A polymer chain of any length can be built up by adding additional monomers to an existing chain. Only monomers freely diffuse, everything else, from dimer and above, are contained within individual cells as explicitly modelled quantities.

Energy enters the system as photons which cells capture by photosynthesis and store as chemical bonds by linking monomers together. The photosynthesis reaction is to join one existing dimer to one free monomer creating one new trimer and consuming one photon. This is the only reaction that captures the energy photos as chemical bonds. The store of trimer within a cell acts as the energy currency similar to ATP in real cells.

Polymers containing four or more monomers are created by adding one new monomer at a time in a reaction which consumes a trimer.

Cells consist of cytoplasm and internal organelles, all made up of polymers. Cells can specialise by investing a lot of resource into growing a particular organelle to be as large as possible at the expense of other organelles. Organelles will probably include:

- cytoplasm (not really an organelle as such): the basic "stuff" of the cell excluding the other organelles, where it's stores of dimer and trimer are kept
- chloroplasts: convert dimers into trimers by capturing photons and consuming free monomers 
- energy storage: contains long polymers which can be readily built up or broken down to store or release trimers

## Photosynthesis Reaction
In this reaction occuring in the photosynthesis organelle one photon is absorbed and converts a dimer and a monomer into a trimer:

 M<sub>2</sub> + M + photon &rarr; M<sub>3</sub>

In this notation M represents a single monomer chemical building block, M<sub>2</sub> means two monomers chemically bonded together (a dimer) and M<sub>3</sub> represent three bonded together (a trimer).

## Energy Storage / Extending a Polymer
Here a single monomer is added to an existing polymer by consuming one trimer, therefore the polymer becomes longer by one unit. Here we require n >= 3:

  M<sub>n</sub> + M<sub>3</sub> &rarr; M<sub>n+1</sub> + 2 M

Why not consume one dimer instead of one trimer? In that case one bond would be broken in spliting the dimer in exchange for one bond created joining one monomer to the polymer. Therefore the reaction would be energetically neutral, and the reverse reaction ought to be equally likely where the monomer falls off again. When we break down the trimer we break two bonds in exchange for creating one new bond, therefore overall we use up one bond's worth of energy in order to actively drive the reaction in the forward direction, and release two free monomers back into the global pool.

## Energy Release / Breaking Down a Polymer
A polymer releases 3 monomers in the form of a trimer, n >= 6:

  M<sub>n</sub> &rarr; M<sub>n-3</sub> + M<sub>3</sub>
