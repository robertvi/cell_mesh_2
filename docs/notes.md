in nature when cells are eaten they are generally broken down by digestion
and this yields energy as well as nutrients
whereas with the current simple metabolism model organelles yield only base monomer when broken down
and it might make sense to require a little energy input to cause this break down to happen quickly
so heterotrophs might as well only extract the active monomer and leave the rest
because only active monomer can be built up into anything or be used for energy
perhaps autotrophs would then evolve the actively breakdown dead cells to obtain base monomer

can we fix this by having organelle break down produce a mixture of base and active monomers?
we could also have multiple energy levels for monomers but then we have to track more than two types
so break down of a mass of n monomers could yield p active and q base monomers
or it could be probabilistic, but that feels further from the nature case

 O_n &rarr; M*_{floor(p*n)} + M_{ceil(q*n)}

but what about gradual breakdown? if only one monomer is lost per timestep then
we either have to use the probabilitic approach or keep a record of how many of each type
have already been released

can a cell try to game to probabilistic system
eg keep breaking down and rebuilding until a favourable outcome is reached?
the monomer sensors provide feedback on what was released, and rebuilding is deterministic
we just have to make sure some energy is always lost each cycle:
only active monomer can be used to rebuild, and at best all released will be active
but some are likely to be base

but we can have fractions of a monomer
and/or the calculations can all be done using floating points and rates of change
so:
to grow an organelle of energy cost p (e[0,1]) per monomer
at rate r
we can consume active monomer at rate rp and base monomer at rate rq
where q = 1-p
and presumably we want the energy released per monomer upon organelle breakdown to be p' < p

therefore organelles still contain some energy which can be released by breaking it down
but always less active monomer is released than was put in to build it

## organelle mass O, surface area SA

 dO/dt = (growth_effort - spontaneous_decay_rate) * SA
 SA = O^(2/3) #since O = r^3 and SA = r^2 ?????

## effect on mass of active monomer A and base monomer B

 dA/dt += -dO/dt * p        } or p' ( < p ) if dO/dt is negative
 dB/dt += -dO/dt * (1 - p)  }

if A or B run out we can simply kill the cell

it seems that the maintenance cost can be implemented by simply having a spontaneous decay rate
which forces the cell to continuously grow the organelle to compensate

the maximum growth rate should presumably be scaled by cell mass, or by cell mass minus existing organelles
or by the existing organelle size, or by organelle surface area
since larger cells should be able to the organelles quicker?

if we use the organelle surface area approach:
where it makes sense to allow multiple of the same type
many small should grow faster than one large
decay could also be limited to the organelle surface

growth effort can be negative in order to actively release the stored monomers

## spontaneous decay of active to base monomer

 dA/dt -= spontaneous_decay_rate * A
 dB/dt += spontaneous_decay_rate * A

## photosynthesis, with organelle of surface area SA

 dA/dt += photon_rate * SA
 dB/dt -= photon_rate * SA

