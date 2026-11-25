# Rust rst

Alternative to C/Cpp . 

## Notes

Targets
* Ubuntu, Intel
* Raspberry Pi SBC, ARM
* Raspberry Pi MCU, ARM
* An other architecture, 

## TODO
* <todo; consider, hello world Rust example, first time coding in Rust ever! target Ubuntu LTS 24.04.3, >
* <todo; consider, hello world Rust example, first time coding in Rust ever! target RPi Z (Pi0), SBC >
* <todo; consider, hello world Rust example, first time coding in Rust ever! target RPi Pi (Pico), MCU >

## DONE
* <done, consider, intent to commit>
* <done; consider, install Rust development env for Ubuntu LTS 24.04.03, >

## Libs
* Rust + Cargo, rust only projects, 
* Rust + CMake + Corrosion, rust + c/cpp projects, 
* other tdb ...

Rust, [WS](https://rust-lang.org/), a language to build reliable efficient software.

## Output

### Rust install
Installation - ubuntu dev env
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
        cargo installed                       10.44 MiB                                clippy installed                        5.11 MiB                             rust-docs installed                       23.22 MiB                              rust-std installed                       29.83 MiB                                 rustc installed                       81.02 MiB                               rustfmt installed                        2.41 MiB                         info: default toolchain set to stable-x86_64-unknown-linux-gnu

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

## References

Rust books/references
* Learn Rust, [WS](https://rust-lang.org/learn/), Rust, official resources for learning Rust language, 
