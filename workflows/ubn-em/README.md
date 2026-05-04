# Ubuntu embedded ubn-em

Ubuntu Core for embedded IoT devices in the first instance, 

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

DONE
* <done: consider, intent to commit>
* <done: consider, create skelleton outline of activities and tasks to complete for worklfow. >

## Output - workflow <name-tbd>
Things to do to compile and deploy to Ubuntu Core
* The activities and tasks undertaken in the workflow

Prerequisite not to be described here
* <todo: consider, compile step, see Ubuntu coding practice for an application to build. >
* <todo: consider, test step, compiled application in container env for ubuntu core? docker? MAAX? is this possible, must be. hopefully gets pointed to in this process, it not add todo in Ubuntu coding practice, >

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

## Libs

Stuff - <todo: rename, headline, >
* Ubuntu Core, [WS](https://ubuntu.com/core), Ubuntu, immutable embedded Linux OS
* Snapcraft, [WS](https://snapcraft.io/docs/), Ubuntu, build tool and framework for snap packaging

## References

Docs
* Ubuntu Core, [WS](https://documentation.ubuntu.com/core/), docs, Ubuntu
* Snap, [WS](https://documentation.ubuntu.com/snapcraft/stable/), docs, snapcraft, Ubuntu,
* 
