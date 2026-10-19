# Sandboxed development environment sde

stub

## Notes

Objectives
* Discrete environments for AGW project kinds

## Status
TODO
* <todo: consider, first Rust environment, rust hello world, deploy executable to RPi z2w, Arduino, >
* <todo: consider, explore how to create a AGW C/C++ env specifically tailored to AGW PMS sensor project, >
* <todo: consider, other sanbox dev env tools, .venn, ... >

DONE
* <done: consider, intent to commit >

## Libs

* LXD [WS](https://canonical.com/lxd/docs/latest/), Ubuntu, required for Workshop, container, 
* Workshop, [WS](https://ubuntu.com/workshop), Ubuntu, sandboxed dev env's using lxd

## Output
* install LXD first, 
* install Workshop second,
* Note this is the recommended order of dependency for easiest process
* Note the other way round is also possible but may need some additional steps to 


Workshop -- info
```
$ snap info workshop
name:    workshop
summary: Workshops are secure, fast, and composable development environments
  that come agent-ready.
publisher: Canonical✓
store-url: https://snapcraft.io/workshop
license:   GPL-3.0-only
description: |
  Workshop gives every project a reproducible, sandboxed development
  environment
  — defined in a single workshop.yaml and launched with one command.
  
      sudo snap install workshop --classic
      workshop init dev --sdks opencode,go/1.27,node/24   # create
      workshop.yaml
      workshop launch                                     # build the
      environment
      workshop shell                                      # drop into it
  
  Each workshop is a system container: a small Ubuntu system with its own
  users,
  packages, networking and systemd services. Virtual machines are also
  supported as an experimental option.
  
  **Why Workshop**
  
  * Composable — assemble environments from SDKs (coding agents, Node, Go,
    Python, Rust, GPU tooling…) published on the SDK Store, or build your
    own.
  * Transactional — every update to the workshop is a change you can inspect,
  with automatic
    rollback on failure.
  * Sandboxed — experiment, break things, and discard with no leftovers on
  the
    host. Expose host directories, devices, secrets, network ports in a
    transparent and controllable way on demand.
  * Agent-ready — run coding agents inside the sandbox with scoped access to
    your project and secrets, not your whole machine.
commands:
  - workshop.configure-dns
  - workshop.sdk
  - workshop
services:
  workshop.workshopd: notify, enabled, inactive
snap-id:      B681J36cdluQRn6yw9D4qXBF4HW2EAi1
tracking:     latest/stable
refresh-date: 2 days ago, at 19:34 BST
channels:
  latest/stable:    0.9.8-d2464c0  2026-10-16 (769) 38.3MB classic
  latest/candidate: ↑                                      
  latest/beta:      ↑                                      
  latest/edge:      0.9.7-5f08f346 2026-10-15 (763) 38.3MB classic
installed:          0.9.8-d2464c0             (769) 38.3MB classic
```

Install and start LXD
```
$ sudo snap install --channel=6/stable lxd
[sudo] password for york-earwaker: 
lxd (6/stable) 6.9-bf243da from Canonical✓ installed

$ sudo snap start --enable lxd.daemon
Started.

$ sudo snap services lxd
Service          Startup  Current   Notes
lxd.activate     enabled  inactive  -
lxd.daemon       enabled  inactive  socket-activated
lxd.user-daemon  enabled  inactive  socket-activated
```

Add developer user to lxd group to access lxd resources
```
$ sudo usermod -a -G lxd $USER
```

LDX -- info
```
e$ snap info lxd
name:      lxd
summary:   LXD - container and VM manager
publisher: Canonical✓
store-url: https://snapcraft.io/lxd
contact:   lxd@lists.canonical.com
license:   AGPL-3.0-only
description: |
  LXD is a system container and virtual machine manager.
  
  It offers a simple CLI and REST API to manage local or remote instances,
  uses an image based workflow and support for a variety of advanced
  features.
  
  Images are available for all Ubuntu releases and architectures as well
  as for a wide number of other Linux distributions. Existing
  integrations with many deployment and operation tools, makes it work
  just like a public cloud, except everything is under your control.
  
  LXD containers are lightweight, secure by default and a great
  alternative to virtual machines when running Linux on Linux.
  
  LXD virtual machines are modern and secure, using UEFI and secure-boot
  by default and a great choice when a different kernel or operating
  system is needed.
  
  With clustering, up to 50 LXD servers can be easily joined and managed
  together with the same tools and APIs and without needing any external
  dependencies.
  
  
  Supported configuration options for the snap (snap set lxd
  [<key>=<value>...]):
  
    - apparmor.unprivileged-restrictions-disable: Whether to disable
    restrictions on unprivileged user namespaces [default=true]
    - ceph.builtin: Use snap-specific Ceph configuration [default=false]
    - ceph.external: Use the system's ceph tools (ignores ceph.builtin)
    [default=false]
    - criu.enable: Enable experimental live-migration support [default=false]
    - daemon.debug: Increase logging to debug level [default=false]
    - daemon.group: Set group of users that have full control over LXD
    [default=lxd]
    - daemon.user.group: Set group of users that have restricted LXD access
    [default=lxd]
    - daemon.preseed: Pass a YAML configuration to `lxd init` on initial
    start
    - daemon.syslog: Send LXD log events to syslog [default=false]
    - daemon.verbose: Increase logging to verbose level [default=false]
    - db.trace: Enable dqlite trace logging (very verbose) [default=false]
    - lvm.external: Use the system's LVM tools [default=false]
    - lxcfs.pidfd: Start per-container process tracking [default=true]
    - lxcfs.loadavg: Start tracking per-container load average
    [default=false]
    - lxcfs.cfs: Consider CPU shares for CPU usage [default=false]
    - lxcfs.debug: Increase logging to debug level [default=false]
    - minio.path: Path to the directory containing the minio and mc binaries
    to use with LXD [default=""]
    - openvswitch.builtin: Run a snap-specific OVS daemon [default=false]
    - openvswitch.external: Use the system's OVS tools (ignores
    openvswitch.builtin) [default=false]
    - ovn.builtin: Use snap-specific OVN configuration [default=false]
    - ui.enable: Enable the web interface [default=true]
    - zfs.external: Use the system's ZFS tools [default=false]
  
  For system-wide configuration of the CLI, place your configuration in
  /var/snap/lxd/common/global-conf/ (config.yml and servercerts)
commands:
  - lxd.buginfo
  - lxd.check-kernel
  - lxd.lxc
  - lxd
services:
  lxd.activate:    oneshot, enabled, inactive
  lxd.daemon:      simple, enabled, inactive
  lxd.user-daemon: simple, enabled, inactive
snap-id:      J60k4JY0HppjwOjW8dZdYc8obXKxujRu
tracking:     6/stable
refresh-date: today at 11:34 BST
channels:
  5.21/stable:      5.21.8-3a06799 2026-09-25 (40958)  123MB -
  5.21/candidate:   5.21.8-3a06799 2026-09-22 (40958)  123MB -
  5.21/beta:        ↑                                        
  5.21/edge:        git-e3f8bc3    2026-10-13 (41109)  123MB -
  latest/stable:    6.9-bf243da    2026-09-25 (40916)  128MB -
  latest/candidate: 6.10.0-b364f30 2026-10-16 (41172)  140MB -
  latest/beta:      ↑                                        
  latest/edge:      git-3225d12    2026-10-19 (41188)  140MB -
  6/stable:         6.9-bf243da    2026-09-25 (40916)  128MB -
  6/candidate:      6.10.0-b364f30 2026-10-16 (41172)  140MB -
  6/beta:           ↑                                        
  6/edge:           git-3322caf    2026-10-16 (41170)  140MB -
  5.0/stable:       5.0.10-24fe763 2026-09-25 (40911)  121MB -
  5.0/candidate:    5.0.10-24fe763 2026-09-18 (40911)  121MB -
  5.0/beta:         ↑                                        
  5.0/edge:         git-64180c5    2026-09-29 (41025)  121MB -
  4.0/stable:       4.0.14-b6e6806 2026-09-25 (40953) 96.6MB -
  4.0/candidate:    4.0.14-b6e6806 2026-09-22 (40953) 96.6MB -
  4.0/beta:         ↑                                        
  4.0/edge:         git-26f9261    2026-09-18 (40903) 96.6MB -
  3.0/stable:       3.0.4          2019-10-10 (11348) 55.7MB -
  3.0/candidate:    3.0.4          2019-10-10 (11348) 55.7MB -
  3.0/beta:         ↑                                        
  3.0/edge:         git-81b81b9    2019-10-10 (11362) 55.7MB -
installed:          6.9-bf243da               (40916)  128MB -
```

## References

* Sandbox (computing)

Workshop - docs
* Workshop [WS](https://ubuntu.com/workshop/docs/), Docs, home
* How to troubleshoot Workshop, [WS](https://ubuntu.com/workshop/docs/how-to/fix-workshops/fix-installation/)
* ...
