# Rust rst

Alternative to C/Cpp . 

## Notes

Targets
* Ubuntu, Intel
* Raspberry Pi SBC, ARM
* Raspberry Pi MCU, ARM
* An other architecture, 

## TODO
* <todo; consider, install Rust development env for Ubuntu LTS 24.04.03, >
* <todo; consider, hello world Rust example, first time coding in Rust ever! target Ubuntu LTS 24.04.3, >
* <todo; consider, hello world Rust example, first time coding in Rust ever! target RPi Z (Pi0), SBC >
* <todo; consider, hello world Rust example, first time coding in Rust ever! target RPi Pi (Pico), MCU >

## DONE
* <done, consider, intent to commit>

## Libs
* Rust + Cargo, rust only projects, 
* Rust + CMake + Corrosion, rust + c/cpp projects, 
* other tdb ...

### Rust install
Installation - ubuntu dev env
* How to set up a development environment for Rust on Ubuntu, [WS](https://documentation.ubuntu.com/ubuntu-for-developers/howto/rust-setup/)
* Rustup, rust standalone installer, [WS](https://rustup.rs/), curl dependency

Installed - rustup, default install
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
