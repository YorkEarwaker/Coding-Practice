# Rust rst

Alternative to C/Cpp . 

## Notes

Targets
* Ubuntu, Intel
* Raspberry Pi SBC, ARM
* Raspberry Pi MCU, ARM
* An other architecture, 

## TODO
* <todo; consider, helix Ubuntu/Debian option .deb install the only viable option now for latest up to date release, see helix releases below, waring! uninstall helix snap first to avoid unintended consequences, >
* <todo; consider, get rust working in VS Codium ide, >
* <todo; consider, hello world Rust example, first time coding in Rust ever! target Ubuntu LTS 24.04.3, >
* <todo; consider, hello world Rust example, first time coding in Rust ever! target RPi Z (Pi0), SBC >
* <todo; consider, hello world Rust example, first time coding in Rust ever! target RPi Pi (Pico), MCU >

## DONE
* <done, consider, intent to commit>
* <done; consider, install Rust development env for Ubuntu LTS 24.04.03, >
* <done; consider, uninstall helix apt install, back out PPA repo addition, uninstall helix apt, best option .deb install or snap install, >
* <done; consider, install Helix terminal code editor, snap instance for initial evaluation, consider .deb install at a later date if necessary, >
* <done; consider, install rust-analyzer language server protocol LSP, rust-analyzer is not part of the rustup default install, >
* <done; consider, test helix terminal editor, open close editor, write first rust code using editor, see /hwd-hx, wip>

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

Install rust - rustup, cargo, default install
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

Check rustup and cargo dir were created
* .rustup dir
* .cargo dir
```
$ sudo ls ~/.rustup
[sudo] password for york-earwaker: 
downloads  settings.toml  tmp  toolchains  update-hashes

$ sudo ls ~/.cargo
bin  env
```

### Helix install
Status: Success! :) 
* Intall Ubuntu dev env
* Helix install, Ubuntu PPA, depricated, PPA no longer supported but still in install docs
 #15890 [GH](https://github.com/helix-editor/helix/issues/15890), but still in docs circa Nov 26 2026, [WS](https://docs.helix-editor.com/package-managers.html#ubuntu-ppa), Failed? :( ? likely from PPA option yes, apparently no longer supported. The install worked but the version may not be compatible with LTS 24.04.3, so a reinstall with backward compatible version binaries or bespoke build from source code may be required. Backed out and uninstalled.
* Helix releases [GH](https://github.com/helix-editor/helix/releases), latest release for manual .deb install, requires manual reinstall with every new helix release

Ubuntu helix install - snap
* snap for Ubuntu for evaluation, 
* simplest approach for Ubuntu for evaluation but lags behind latest release
* snap install --classic helix 
```
$ snap install --classic helix
helix 25.07.1 from Lauren Brock✪ installed
```

Check helix version
* the snap version, installed '2026.11.26'
```
$ helix -V
helix 25.07.1 (a05c151b)

$ hx -V
helix 25.07.1 (a05c151b)
```

Check helix snap install details, whereis, command, list, info
* the snap version, installed '2026.11.26'
```
$ whereis helix
helix: /snap/bin/helix

$ command -v helix
/snap/bin/helix

$ snap list helix
Name   Version  Rev  Tracking       Publisher      Notes
helix  25.07.1  120  latest/stable  lauren-brock✪  classic

$ snap info helix
name:      helix
summary:   A post-modern modal text editor written in Rust.
publisher: Lauren Brock✪
store-url: https://snapcraft.io/helix
license:   MPL-2.0
description: |
  Helix is a terminal-based modal text editor inspired by Vim and Kakoune,
  built for modern development workflows.
  
  Features:
    * Vim-like modal editing with a selection-first, action-second model
    borrowed from Kakoune
    * Multiple cursors and selections as a first-class feature
    * Built-in Language Server Protocol (LSP) support for code intelligence:
    completions, diagnostics, go-to-definition, and more — no plugins needed
    * Smart, incremental syntax highlighting and structural editing via
    tree-sitter
    * Fuzzy file picker, global search, and a built-in command palette
    * Written in Rust for performance and reliability
commands:
  - helix
snap-id:      JbSwFezsVhBG8EpYeNqD4HX31U5WIzdY
tracking:     latest/stable
refresh-date: today at 09:13 GMT
channels:
  latest/stable:    25.07.1              2025-07-19 (120) 21.7MB classic
  latest/candidate: ↑                                            
  latest/beta:      ↑                                            
  latest/edge:      25.07-984-g079a789e8 2026-09-12 (177) 25.0MB classic
installed:          25.07.1                         (120) 21.7MB classic
```

Check helix health once rust-analyzer installed
* see below rust-analyzer install 
* hx is the helix binary
```
$ hx --health rust
Configured language servers:
  ✓ rust-analyzer: /home/york-earwaker/.cargo/bin/rust-analyzer
Configured debug adapter:
  ✘ 'lldb-dap' not found in $PATH
Configured formatter: None
Tree-sitter parser: ✓
Highlight queries: ✓
Textobject queries: ✓
Indent queries: ✓
```

Helix help - commands and argument flags
```
$ hx --help
helix-term 25.07.1 (a05c151b)
Blaž Hrastnik <blaz@mxxn.io>
A post-modern text editor.

USAGE:
    hx [FLAGS] [files]...

ARGS:
    <files>...    Sets the input file to use, position can also be specified via file[:row[:col]]

FLAGS:
    -h, --help                     Prints help information
    --tutor                        Loads the tutorial
    --health [CATEGORY]            Checks for potential errors in editor setup
                                   CATEGORY can be a language or one of 'clipboard', 'languages'
                                   or 'all'. 'all' is the default if not specified.
    -g, --grammar {fetch|build}    Fetches or builds tree-sitter grammars listed in languages.toml
    -c, --config <file>            Specifies a file to use for configuration
    -v                             Increases logging verbosity each use for up to 3 times
    --log <file>                   Specifies a file to use for logging
                                   (default file: /home/york-earwaker/.cache/helix/helix.log)
    -V, --version                  Prints version information
    --vsplit                       Splits all given files vertically into different windows
    --hsplit                       Splits all given files horizontally into different windows
    -w, --working-dir <path>       Specify an initial working directory
    +N                             Open the first given file at line number N
```

### Install lldb-dap debug adapter
Status: tbd
* <todo: consider, lldb-dap install only when necessary, >
* Only need to step through rust code from within helix.
* Not necessary if using Cargo test or only running binaries

Not yet installed
* not tested and '$ls ~/.cargo/bin' contains 'rust-lldb'
* maybe just needs config somewhere for 'rust-lldb' and no need to install lldb?
```
sudo apt install lldb
cargo install lldb-dap
```

### rust-analyzer install
Status: Success! :)
* Intall Ubuntu dev env
* rust-analyzer, install, docs [WS](https://rust-analyzer.github.io/book/installation.html)

Install rust-analyzer
* apparently since ≥ 1.26 rust-analyzer is placed in $PATH (at ~/.cargo/bin/rust-analyzer)
* dependency on rustup install beforehand 
```
$ rustup component add rust-analyzer
info: downloading component rust-analyzer
rust-analyzer installed                        9.11 MiB 
```

Check cargo dir contents
* rust-analyzer appears on cargo bin directory 
```
$ sudo ls ~/.cargo/bin
cargo	      cargo-miri     rust-analyzer  rustfmt	 rust-lldb
cargo-clippy  clippy-driver  rustc	    rust-gdb	 rustup
cargo-fmt     rls	     rustdoc	    rust-gdbgui
```

### Create a helix languages.toml file
Status: tbd
* <todo: consider, create global languages.toml file only when necessary, not created automatically, default setting compiled into the hx binary see https://github.com/helix-editor/helix/blob/master/languages.toml >
* This is only necessary to create bespoke settings to overwrite rust-analyser default settings
* the helix languages.toml gobal overides, can declaire LSP explicitly, and attributes, 
* create the languages.toml with 'touch'
* edit the languages. toml with 'nano'

Not yet attempted
```
$ touch ~/.config/helix/languages.toml
$ nano ~/.config/helix/languages.toml
```

## References

Rust books/references
* Learn Rust, [WS](https://rust-lang.org/learn/), Rust, official resources for learning Rust language, 
