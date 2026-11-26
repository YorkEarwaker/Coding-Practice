# Rust rst

Alternative to C/Cpp . 

## Notes

Targets
* Ubuntu, Intel
* Raspberry Pi SBC, ARM
* Raspberry Pi MCU, ARM
* An other architecture, 

## TODO
* <todo; consider, install rust-analyzer language server protocol LSP, rust-analyzer is not part of the rustup default install, >
* <todo; consider, test helix terminal editor, open, start first rust code project, >
* <todo; consider, hello world Rust example, first time coding in Rust ever! target Ubuntu LTS 24.04.3, >
* <todo; consider, hello world Rust example, first time coding in Rust ever! target RPi Z (Pi0), SBC >
* <todo; consider, hello world Rust example, first time coding in Rust ever! target RPi Pi (Pico), MCU >

## DONE
* <done, consider, intent to commit>
* <done; consider, install Rust development env for Ubuntu LTS 24.04.03, >
* <done; consider, install Helix terminal code editor, >

## Libs
Use case
* Rust + Cargo, rust only projects, 
* Rust + CMake + Corrosion, rust + c/cpp projects, 
* other tdb ...

Language
* Rust, [WS](https://rust-lang.org/), a language to build reliable efficient software.
* Rustup, [WS](https://rustup.rs/), toolchain manager, installer, install this first
* rust-analyzer, [WS](https://rust-analyzer.github.io/book/index.html), language server, ide functionality for writing rust programs, dependency rustup, required separate instal for helix terminal editor, 

IDE - several available, see rust splash page
* <info: for the AGW project specifically, keep under review>
* VS Codium, UI, frist class, fully foss, microsoft telemetry stripped out, already installed, 
* Helix, [GH](https://github.com/helix-editor/helix), [WS](https://helix-editor.com/), docs [WS](https://docs.helix-editor.com/), terminal, first class, fully foss, zero config, modern multi modal, written in rust, 
* Zed, terminal, tbd, keep under review, fully foss

## Output

### Rust install
Status: Success! :)
* Intall Ubuntu dev env
* How to set up a development environment for Rust on Ubuntu, [WS](https://documentation.ubuntu.com/ubuntu-for-developers/howto/rust-setup/)
* Rustup, rust standalone installer, [WS](https://rustup.rs/), curl dependency, must be apt curl not snap curl or rustup install breaks

Check curl installed instance and reinstall if necessary
```
$ snap list curl
Name  Version  Rev   Tracking       Publisher  Notes
curl  8.23.0   2429  latest/stable  aoilinux   -

$ command -v curl
/snap/bin/curl

$ whereis curl
curl: /snap/bin/curl

$ sudo snap remove curl && sudo apt install curl
[sudo] password for york-earwaker: 
curl removed (snap data snapshot saved)
Reading package lists... Done
Building dependency tree... Done
Reading state information... Done
The following package was automatically installed and is no longer required:
  nvidia-firmware-580-580.173.02
Use 'sudo apt autoremove' to remove it.
The following NEW packages will be installed:
  curl
0 upgraded, 1 newly installed, 0 to remove and 1 not upgraded.
Need to get 226 kB of archives.
After this operation, 537 kB of additional disk space will be used.
Get:1 http://gb.archive.ubuntu.com/ubuntu noble-updates/main amd64 curl amd64 8.5.0-2ubuntu10.16 [226 kB]
Fetched 226 kB in 0s (2,438 kB/s)
Selecting previously unselected package curl.
(Reading database… 284377 files and directories currently installed.)
Preparing to unpack …/curl_8.5.0-2ubuntu10.16_amd64.deb…
Unpacking curl (8.5.0-2ubuntu10.16)…
Setting up curl (8.5.0-2ubuntu10.16)…
Processing triggers for man-db (2.12.0-4build2)…

$ whereis curl
curl: /usr/bin/curl /usr/share/man/man1/curl.1.gz

$ command -v curl
/usr/bin/curl

$ sudo apt autoremove
[sudo] password for york-earwaker: 
Reading package lists... Done
Building dependency tree... Done
Reading state information... Done
The following packages will be REMOVED:
  nvidia-firmware-580-580.173.02
0 upgraded, 0 newly installed, 1 to remove and 1 not upgraded.
After this operation, 106 MB disk space will be freed.
Do you want to continue? [Y/n] y
(Reading database… 284384 files and directories currently installed.)
Removing nvidia-firmware-580-580.173.02 (580.173.02-0ubuntu0.24.04.1)…
```

Install rust - rustup, default install
```
$ curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh
info: downloading installer

Welcome to Rust!

This will download and install the official compiler for the Rust
programming language, and its package manager, Cargo.

Rustup metadata and toolchains will be installed into the Rustup
home directory, located at:

  /home/york-earwaker/.rustup

This can be modified with the RUSTUP_HOME environment variable.

The Cargo home directory is located at:

  /home/york-earwaker/.cargo

This can be modified with the CARGO_HOME environment variable.

The cargo, rustc, rustup and other commands will be added to
Cargo's bin directory, located at:

  /home/york-earwaker/.cargo/bin

This path will then be added to your PATH environment variable by
modifying the profile files located at:

  /home/york-earwaker/.profile
  /home/york-earwaker/.bashrc

You can uninstall at any time with rustup self uninstall and
these changes will be reverted.

Current installation options:


    default host tuple: x86_64-unknown-linux-gnu
     default toolchain: stable (default)
               profile: default
  modify PATH variable: yes

1) Proceed with standard installation (default - just press enter)
2) Customize installation
3) Cancel installation
>

info: profile set to default
info: default host tuple is x86_64-unknown-linux-gnu
info: syncing channel updates for stable-x86_64-unknown-linux-gnu
info: latest update on 2026-11-12 for version 1.100.0 (0ef1bc386 2026-11-09)
info: downloading 6 components
        cargo installed                       10.44 MiB                                
        clippy installed                       5.11 MiB                             
        rust-docs installed                   23.22 MiB                              
        rust-std installed                    29.83 MiB                                 
        rustc installed                       81.02 MiB                               
        rustfmt installed                      2.41 MiB                         
info: default toolchain set to stable-x86_64-unknown-linux-gnu

  stable-x86_64-unknown-linux-gnu installed - rustc 1.100.0 (0ef1bc386 2026-11-09)


Rust is installed now. Great!

To get started you may need to restart your current shell.
This would reload your PATH environment variable to include
Cargo's bin directory ($HOME/.cargo/bin).

To configure your current shell, you need to source the
corresponding env file under $HOME/.cargo.

Consider running the right command for your shell (note the leading DOT):
. "$HOME/.cargo/env" # For sh/ash/dash/pdksh/bash
cargo:rerun-if-env-changed=CC_x86_64-unknown-linux-gnu
CC_x86_64-unknown-linux-gnu = None
cargo:rerun-if-env-changed=CC_x86_64_unknown_linux_gnu
CC_x86_64_unknown_linux_gnu = None
cargo:rerun-if-env-changed=HOST_CC
HOST_CC = None
cargo:rerun-if-env-changed=CC
CC = None
cargo:rerun-if-env-changed=CC_ENABLE_DEBUG_OUTPUT
cargo:rerun-if-env-changed=CPATH
cargo:rerun-if-env-changed=C_INCLUDE_PATH
cargo:rerun-if-env-changed=CPLUS_INCLUDE_PATH
cargo:rerun-if-env-changed=OBJC_INCLUDE_PATH
cargo:rerun-if-env-changed=OBJCPLUS_INCLUDE_PATH
cargo:rerun-if-env-changed=COMPILER_PATH
cargo:rerun-if-env-changed=SOURCE_DATE_EPOCH
cargo:rerun-if-env-changed=GCC_EXEC_PREFIX
cargo:rerun-if-env-changed=CRATE_CC_NO_DEFAULTS
CRATE_CC_NO_DEFAULTS = None
cargo:rerun-if-env-changed=CFLAGS
CFLAGS = None
cargo:rerun-if-env-changed=HOST_CFLAGS
HOST_CFLAGS = None
cargo:rerun-if-env-changed=CFLAGS_x86_64_unknown_linux_gnu
CFLAGS_x86_64_unknown_linux_gnu = None
cargo:rerun-if-env-changed=CFLAGS_x86_64-unknown-linux-gnu
CFLAGS_x86_64-unknown-linux-gnu = None
```

### Helix install
Status: Failed? :( ? likely from PPA option yes, apparently no longer supported. To be tested. The install worked but the version may not be compatible with LTS 24.04.3, so a reinstall with backward compatible version binaries or bespoke build from source code may be required. 
* <todo: consider, if not working correctly then perhaps an excuse for first compile from source code as a learning step, this may also be an issue with rust-analyzer see below, tbd >
* Intall Ubuntu dev env
* Helix install, Ubuntu PPA, depricated, PPA no longer supported but still in install docs
 #15890 [GH](https://github.com/helix-editor/helix/issues/15890), but still in docs circa Nov 26 2026, [WS](https://docs.helix-editor.com/package-managers.html#ubuntu-ppa), 
* <todo; consider is Ubuntu/Debian option .deb install the only viable option now.>
* <todo; consider, back out PPA repo addition, uninstall helix apt, confused, >

Ubuntu helix install - add apt PPA repo locally
* step one, add the ppa repo
```
$ sudo add-apt-repository ppa:maveonair/helix-editor
[sudo] password for york-earwaker: 
Repository: 'Types: deb
URIs: https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu/
Suites: noble
Components: main
'
Description:
A post-modern text editor.

The source code used to build the package can be found here: https://github.com/maveonair/helix-ppa.
More info: https://launchpad.net/~maveonair/+archive/ubuntu/helix-editor
Adding repository.
Press [ENTER] to continue or Ctrl-c to cancel.
Hit:1 http://gb.archive.ubuntu.com/ubuntu noble InRelease
Get:2 http://gb.archive.ubuntu.com/ubuntu noble-updates InRelease [126 kB]     
Hit:3 http://gb.archive.ubuntu.com/ubuntu noble-backports InRelease            
Hit:4 http://security.ubuntu.com/ubuntu noble-security InRelease               
Get:5 http://gb.archive.ubuntu.com/ubuntu noble-updates/main amd64 Packages [1,492 kB]
Get:6 http://gb.archive.ubuntu.com/ubuntu noble-updates/main Translation-en [321 kB]
Hit:7 https://ppa.launchpadcontent.net/git-core/ppa/ubuntu noble InRelease     
Ign:8 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble InRelease
Get:8 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble InRelease [17.8 kB]
Ign:9 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble/main amd64 Packages
Ign:10 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble/main Translation-en
Ign:9 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble/main amd64 Packages
Ign:10 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble/main Translation-en
Get:9 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble/main amd64 Packages [492 B]
Get:10 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble/main Translation-en [212 B]
Fetched 1,957 kB in 56s (35.1 kB/s)      
Reading package lists... Done
```

Ubuntu helix install - update apt
* step two, update the apt local repo instance
```
$ sudo add-apt-repository ppa:maveonair/helix-editor
[sudo] password for york-earwaker: 
Repository: 'Types: deb
URIs: https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu/
Suites: noble
Components: main
'
Description:
A post-modern text editor.

The source code used to build the package can be found here: https://github.com/maveonair/helix-ppa.
More info: https://launchpad.net/~maveonair/+archive/ubuntu/helix-editor
Adding repository.
Press [ENTER] to continue or Ctrl-c to cancel.
Hit:1 http://gb.archive.ubuntu.com/ubuntu noble InRelease
Get:2 http://gb.archive.ubuntu.com/ubuntu noble-updates InRelease [126 kB]     
Hit:3 http://gb.archive.ubuntu.com/ubuntu noble-backports InRelease            
Hit:4 http://security.ubuntu.com/ubuntu noble-security InRelease               
Get:5 http://gb.archive.ubuntu.com/ubuntu noble-updates/main amd64 Packages [1,492 kB]
Get:6 http://gb.archive.ubuntu.com/ubuntu noble-updates/main Translation-en [321 kB]
Hit:7 https://ppa.launchpadcontent.net/git-core/ppa/ubuntu noble InRelease     
Ign:8 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble InRelease
Get:8 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble InRelease [17.8 kB]
Ign:9 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble/main amd64 Packages
Ign:10 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble/main Translation-en
Ign:9 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble/main amd64 Packages
Ign:10 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble/main Translation-en
Get:9 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble/main amd64 Packages [492 B]
Get:10 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble/main Translation-en [212 B]
Fetched 1,957 kB in 56s (35.1 kB/s)      
Reading package lists... Done
york-earwaker@york-earwaker-XPS-15-9560:~$ sudo apt update
Hit:1 http://gb.archive.ubuntu.com/ubuntu noble InRelease
Hit:2 http://gb.archive.ubuntu.com/ubuntu noble-updates InRelease              
Hit:3 http://gb.archive.ubuntu.com/ubuntu noble-backports InRelease            
Hit:4 http://security.ubuntu.com/ubuntu noble-security InRelease               
Ign:5 https://ppa.launchpadcontent.net/git-core/ppa/ubuntu noble InRelease     
Ign:6 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble InRelease
Ign:5 https://ppa.launchpadcontent.net/git-core/ppa/ubuntu noble InRelease
Ign:6 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble InRelease
Ign:5 https://ppa.launchpadcontent.net/git-core/ppa/ubuntu noble InRelease
Ign:6 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble InRelease
Err:5 https://ppa.launchpadcontent.net/git-core/ppa/ubuntu noble InRelease
  503  Service Unavailable [IP: 2620:2d:4000:1009::12c 443]
Err:6 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble InRelease
  503  Service Unavailable [IP: 185.125.189.186 443]
Reading package lists... Done
Building dependency tree... Done
Reading state information... Done
1 package can be upgraded. Run 'apt list --upgradable' to see it.
W: Failed to fetch https://ppa.launchpadcontent.net/git-core/ppa/ubuntu/dists/noble/InRelease  503  Service Unavailable [IP: 2620:2d:4000:1009::12c 443]
W: Failed to fetch https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu/dists/noble/InRelease  503  Service Unavailable [IP: 185.125.189.186 443]
W: Some index files failed to download. They have been ignored, or old ones used instead.
```

Ubuntu helix install - do the helix install
* Step three, install the helix terminal editor
```
$ sudo apt install helix
Reading package lists... Done
Building dependency tree... Done
Reading state information... Done
The following NEW packages will be installed:
  helix
0 upgraded, 1 newly installed, 0 to remove and 1 not upgraded.
Need to get 16.5 MB of archives.
After this operation, 177 MB of additional disk space will be used.
Ign:1 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble/main amd64 helix amd64 24.07-1~ubuntu24.04~ppa1
Ign:1 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble/main amd64 helix amd64 24.07-1~ubuntu24.04~ppa1
Ign:1 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble/main amd64 helix amd64 24.07-1~ubuntu24.04~ppa1
Get:1 https://ppa.launchpadcontent.net/maveonair/helix-editor/ubuntu noble/main amd64 helix amd64 24.07-1~ubuntu24.04~ppa1 [16.5 MB]
Fetched 16.5 MB in 58s (284 kB/s)                                              
Selecting previously unselected package helix.
(Reading database… 284377 files and directories currently installed.)
Preparing to unpack …/helix_24.07-1~ubuntu24.04~ppa1_amd64.deb…
Unpacking helix (24.07-1~ubuntu24.04~ppa1)…
Setting up helix (24.07-1~ubuntu24.04~ppa1)…
Processing triggers for hicolor-icon-theme (0.17-2)…
Processing triggers for gnome-menus (3.36.0-1.1ubuntu3)…
Processing triggers for desktop-file-utils (0.27-2build1)…
```

### rust-analyzer install
Status: tbd
* Intall Ubuntu dev env
* rust-analyzer, install, docs [WS](https://rust-analyzer.github.io/book/installation.html)
* ...

## References

Rust books/references
* Learn Rust, [WS](https://rust-lang.org/learn/), Rust, official resources for learning Rust language, 
