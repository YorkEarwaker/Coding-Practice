# Ubuntu embedded ubn-em

Ubuntu Core for embedded IoT devices in the first instance, 

See also
* SSH, [GH](https://github.com/YorkEarwaker/Networks/tree/main/ssh), networks

## Notes

Objectives - primary
* Ubuntu Core 'hello world' application snap deployment to RPi Zero 2 W hardware
* First cut application deployment workflow for AGW project IoT SBC devices

Objectives - secondary, naturally fall out of primary objectives
* Snap, general first introduction, 
* Snap, specifically for using with Ubuntu Core embedded 
* Ubuntu Core, general first introduction for use in embedded
* Ubuntu Core, specifically for use the Raspberry Pi Zero 2 W and RPi ecosystem compatability

Learning aims - discovery, are these really todo's
* snap - create a snap package, package format 
* snapcraft - use the, buildtool and framework for snap packaging
* snap store - publish snap, repository for publishing snaps to, 
* snapd - use the snap packaging daemon, install, run, and update applications
* bespoke core OS image - make one including new snap application

## Status
TODO
* <todo: consider, first snap hello world to deploy to ubuntu core for rpi zero development workflow for IoT devices, build bespoke first ubuntu core image for AGW project things, >
* <todo: consider, provide more detail for each activity and task in the workflow, verify the steps are correct, are some missing, wrongly named, provide Ubuntu Linux cli commands and output where appropriate, >
* <todo: consider, try pre built image, core26, on RPi Z2W, >
* <todo: consider, complete create core image tutorial use as foundation for moving toward first cut workflow for AGW below, >
* <todo: consider, complete create a snap tutorial use as foundation for moving toward first cut workflow for AGW below, >
* <todo: consider, combine create a snap and create a core image as workflow create AGW Ubuntu Core for RPi, >
* <todo: consider, read the ncsc supply chain security and SBoM content, at least it is logged as an concern, keep under review, security sec part of DevSecOps, necessary but feels like homework, concern of the chief security officer CSO specifically, concern of many generally to be aware of, toward vulnerability scanning automation worklow to be determined and documented elsewhere in automation repo, >

DONE
* <done: consider, intent to commit, >
* <done: consider, create skelleton outline of activities and tasks to complete for worklfow. >
* <done: consider, try pre built image, core24, should try again for practice, successfully copied to MicroSD Card, configured via serial connection to RPi Z2W, connected via Ubuntu One SSH subsequently, not rigoursly tested core24 on RPI Z2W, no problems at present 7 May 2026, activities to date; logon via One SSH, query Zero hardware, >

## Output - workflow - create AGW Ubuntu Core image for install on embedded device
Things to do to compile and deploy to Ubuntu Core
* The activities and tasks undertaken in the workflow
* concentrate of Raspberry Pi ARM SBC embedded devices in first instance, core image and AGW snap applications

Prerequisite not to be described here
* <todo: consider, compile step, see Ubuntu coding practice for an application to build. >
* <todo: consider, test step, compiled application in container env for ubuntu core? docker? Multipass? MAAX? is this possible, must be. hopefully gets pointed to in this process, it not add todo in Ubuntu coding practice, >

### Package Application as a Snap
Hello world in first instance.

* Create a snapcraft.yaml for the application
* Build the snap
* Publish the snap

### Prepare the Model Assertion
Ubuntu Core images are defined as model assertions.

* Download the Reference Model
* Edit the Model
* Sign the Model

### Build and deploy the image

* Install the tools
* Generate the image
* Write the Hardware, use Raspberry Pi Imager or dd to write image to SD Card or MicroSD Card 
* Boot, on Raspberry Pi Zero 2 W in first instance

## Output - tutorial - create a core image
* content follows Build Your First Image from Ubuntu documentation, [WS](https://documentation.ubuntu.com/core/tutorials/build-your-first-image/), retrieved 8 May 2026
* ...


## Output - tutorial - create a snap
* content follows Craft a Snap from Ubuntu documentation, [WS](https://documentation.ubuntu.com/snapcraft/stable/tutorials/craft-a-snap/), retrieved 8 May 2026
* ...


## Libs
List main elements of a software bill of materials 

SBoM - Main software component dependency
* Ubuntu Core, [WS](https://ubuntu.com/core), Ubuntu, immutable embedded Linux OS
* Snapcraft, [WS](https://snapcraft.io/docs/), Ubuntu, build tool and framework for snap packaging
* LDX - container, share host kernel, lightweight, system level service, dev env's, possible conflict with Docker, thousands of instances per host, 

SBoM - Alternative software components
* Multipass - VM, own kernel, virtual hardware emulation, more resource intensive, isolated Ubuntu vm, dev env's, cross platform, can be used instead of LDX

Note 1. Docker, share host kernel, application deployment, localhost or cloud, not used in snap/snapcraft development, issues running snap on Docker, no longer supported?. 

## References

Terms
* SBoM, software bill of materials, [WP](https://en.wikipedia.org/wiki/Software_supply_chain), cisa [WS](https://www.cisa.gov/topics/information-communications-technology-supply-chain-security/sbom), ncsc [WS](https://www.ncsc.gov.uk/blog-post/sboms-and-the-importance-of-inventory), aka software supply chain, two types required, human readable, machine readable, 
* Supply chain security, ncsc [WS](https://www.ncsc.gov.uk/collection/supply-chain-security), CSO, other CxO offices, board level responsibility? 
* SCA, Software composition analysis, automation, check nested dependencies particularly of open source products are all up to date and patched for vulnerabilities aka security issues, known defects, proscribed providers, design flaws, and so on, 
* Vulnerabilities, of software component elements, in the supply chain, vulnerability scanner automation parsing and rules of the assessment of machine readable SBoM's .

Docs - core
* Ubuntu Core, [WS](https://documentation.ubuntu.com/core/), docs, Ubuntu
* 

Docs - snap
* Snap, [WS](https://documentation.ubuntu.com/snapcraft/stable/), docs, snapcraft, Ubuntu,
* Craft a Snap, [WS](https://documentation.ubuntu.com/snapcraft/stable/tutorials/craft-a-snap/), docs, tutorial, snapcraft, Ubuntu, hand craft a snap, 
* 

News Papers - snap development
* Reasoning behind the move to multipass, [WS](https://forum.snapcraft.io/t/reasoning-behind-the-move-to-multipass/9648), Canonical, snapcraft, 
