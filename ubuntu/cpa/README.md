# C Cpp ASM cpa 



## Notes

Work in progress wip setup of C/C++ toolchains for development on Ubuntu LTS 24.04.3 linux .

## TODO
* <todo; consider, include link to Ubuntu tuturoal for GCC install in references, >

## DONE
* <done; intent to commit, >

## Issues

### Issue 1
Could not find gcc or g++ or make installed on Ubuntu LTS 24.04.3 . Had mistakenly assumed they were installed by default.
* Resolved. The Ubuntu Desktop default install 'does not include basic develop tooling' [WS](https://documentation.ubuntu.com/ubuntu-for-developers/explanation/install-ubuntu/#developer-tooling)

```
$ g++ --version
Command 'g++' not found, but can be installed with:
sudo apt install g++
$ make --version
Command 'make' not found, but can be installed with:
sudo apt install make        # version 4.3-4.1build1, or
sudo apt install make-guile  # version 4.3-4.1build1
$ gcc --version
Command 'gcc' not found, but can be installed with:
sudo apt install gcc
```

## References

Ubuntu gcc g++
* Checking If GCC Compiler Is Installed On My Linux System, [WS](https://www.osetc.com/en/checking-if-gcc-compiler-is-installed-on-my-linux-system.html), 



