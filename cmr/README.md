# CHERI MTE Rust cmr

Memoery safety and secure software, using hardware enabled memory check instruction sets, currently run with overheads in prod and dev, wait for tech to evlov before use, tie in the linux kernel synergies, 

stub

## Notes

Objectives
* RISC-V CHERI, preventative deterministic, runtime execution, spacial safety, extended ISA for RISC-V, mandatory new base ISA RVY as opposed to integer RVI, Y denotes CHERI die whole, memory overflow prohibition, die ic and SoCs, significant redesign of cores, software rewrites not backward compabile?, 
* ARM MTE, prevantative probabalistic, runtime execution, temporal safety, extended ISA for ARM, optional no change to base ISA, chip can be ARMv9 compliant and not have MTE die part, memory tag runtime checks, die ic and SoCs, backward compatible C/C++ code?, as debug/support/maintenance flag?
* Rust, proactive, programming code, 

Disambiguation
* Grey stuff, chips, chiplets, embedded dies, package ceramic containers, silicone and compound substrait
* Green stuf, printed circuite boards, also sometime differenct colours beige red other,

## Status
TODO
* <todo: consider, aquire Clang/LLVM and GNU GCC compilers that support CHERI>
* <todo; consider, reearach CHERI IoT initiative >
* <todo; consider, reearch CHERI Rust initiative >
* <todp; consider, monitor release of COTS SoC's and chip sets from retailers for MCU and SBC>
* <todo: consider, MCU microcontroller CHERI RISC-V board for evaluation and compiler tool chain>
* <todo: consider, is MTE or equivalent avaiable for the RISC-V architecture,  >
* <todo: consider, stand alone RISC-V project, get to know risc-v architecture first pass>
* <todo: consider, stand alone ARM MTE project, get to know mte usage, first pass>
* <todo: consider, stand alone Rust project, get to know rust usage, on risc-v architecture, >
* <todo; consider, stand along C/C++ project, get to know C/C++ usage, on risc-v architecture >

DONE
* <done: consider, intent to commit>
* <done; consider, strategic direction for AGW project, uk eu sovereign digital supply chains, IC design, IC fab, uk IP, >

## References

* Capability Hardware Enhanced RISC Instructions CHERI, [WS](https://ctsrd-cheri.github.io/cheribsd-getting-started/), extended instruction set to isolate memory and other code defect errors
* Memory Tagging Extendion ARM MTE, runtime emulation? but resource intensive, so not prod bau capablity, 
* Rust, programming language
* Clang/LLVM, compiler CHERI instruction set compliant
* GNU GCC, compitler CHERI instruction set compliant
* RISC-V, instruction set architecture, open source
* ARM, instrucction set architecture, proprietry
* ...

Hybrid chipsets - integrated circet design and manufacture
* Instruction Set Architecture ISA, logcical realized by implementatoin of physical fabrication of die
* Chiplet, reusable die, small chip die for system in package SiP, multiple chiplets with differnt functions arranged for different package requirements, half way house between SoC and SiP, 
* Packaging, integrated circuits 
* System on Chip SoC, single die, integrating CPU, memory, I/O , all necessary components combined as a single die unit
* Multipel Chip Module MCM, subsystem, multiple bare dies combined stacked vertically or horizontally side by side encapsulated as a single unit in a common substrate
* System in Package SiP, multiple dies for multiple discrete chips, some chips might be SoC's, often stacked vertically in a ceramic contaier, of horizontally on pcb,  mix of different manufacturing process, different compound fab's and COTS unti parts into a whole, faster ttm, design flexabilltiy, system of systems, a bit less performant than a SoC, a cmplete system which may also include passive components, antenas, and sensors in the same package a contaier small pcb or ceramic carrier of heterogenous chip sets,
* System on Module SoM, simpler version of a CoM, printed circuit board pcb, processor + memory/storage, not a single chip SoC or package SiP, 
* Computer on Module CoM, more complex version of a SoM, printed circuit board pcb, processor + memory/storage, not a single chip SoC or package SiP, more computationa power and features like more processors or FPGSs than SoMs
* Package on Package PoP, memory packages are stacked directly on processor packages, a discrete SiP kind, 
* Universal Chiplet Interconnect Express UCIe [WP](https://en.wikipedia.org/wiki/UCIe), standard for integrating multiple dies in horizontal and vertical packaged architecture, at the chiplet ic level not the pcb level, computational speed and energy efficiency, 

Design method
* Chip down, not a component, design of a pcb soldering processor and memory to board as individual components, not a SoM or CoM module, lowest unit cost and smallest form factor footprint, high volume production, non trivial engineering effort, ttm is longer, upgrading individual components due to small space more difficult, less reuable
* Application specific standard product ASSP, multiple customers as standard product, COTS, market specific chip design, standard chip for market niche
* Application specific integrated circuit ASIC, bespoke boutique chip design, custom design, specific application, single function, higher performance and efficienty for task but not flexable general compute, many be a part of a SoC, high efficiency low flexability
* System on Package SoP, advanced packaging, incorporating capacitors antenas resistors, embedds system components into the package substrate layers, thin film passive components resistors, capcitors high Q inductors, and sometimes active components into wiring layers, substrate a cuircuit board, reduceding set of external components to be mounted on a pcb
* Pointer Authenitcation Code PAC, ARM ISA feature, cryptographic signed pointers to prevent control flow hijacking. Used in combination with MTE.
* Trusted Excetion Environment TEE, secure part of SoC, ARM TrustZone, RISC-V PMP, to isolate sensitive code, ISA extensions CHERI/MTE improve TEE boundary perimiter safety
* Physical Memory Protection PMP, RISC-V memory region access standard, pre CHERI security baseline
* Root of Trust RoT, small ASIC or dedicated core, hareware module in a SoC, part of security chain, RoT is dependency for ISA security features
* Design for Testability DFT, die design techniques to detect manufacturing defects, not an ISA security feature

Fabrication method - manufacturing
* Silicon on Insulator SoI, reduce parasitic capacitance and improve performance, layered silicon-insulator-silicon

Products - devices IoT, hobyist, education, 
* Single Board Computer, larger than a SoM or CoM, a complete computer on a single pcb, all system computer components on a single board, 
* Microcontroller, 
* Breakout board, 
* Sensor, 

Products - retail,
* Laptop
* Smart phone
* White goods
* Consumer appliances
* ...

Products - service, specialist capability, industrial
* High performance computing hpc, 
* Telco, 5g 6g
* Ai system
* Automotive
* Medicine
* Robotics
* Space
* Optics
* ...

Reports, 
* The semiconductor industry in the UK,  [WS](https://publications.parliament.uk/pa/cm5803/cmselect/cmbeis/291/report.html), 28 November 2022, Fifth Report of Session 2022–23,  UK gov, 


