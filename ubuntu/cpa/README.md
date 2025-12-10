# C Cpp ASM cpa 



## Notes

Work in progress wip setup of C/C++ toolchains for development on Ubuntu LTS 24.04.3 linux .

## Issues

### Issue 1
Could not find gcc or g++ or make installed on Ubuntu LTS 24.04.3 . Had mistakenly assumed they were installed by default.

```
york-earwaker@york-earwaker-XPS-15-9560:~/Documents/dev/repo/coding-practice/ubuntu/cpa/hwd$ command -v gcc
york-earwaker@york-earwaker-XPS-15-9560:~/Documents/dev/repo/coding-practice/ubuntu/cpa/hwd$ which gcc
york-earwaker@york-earwaker-XPS-15-9560:~/Documents/dev/repo/coding-practice/ubuntu/cpa/hwd$ gcc --version
Command 'gcc' not found, but can be installed with:
sudo apt install gcc
york-earwaker@york-earwaker-XPS-15-9560:~/Documents/dev/repo/coding-practice/ubuntu/cpa/hwd$ make --version
Command 'make' not found, but can be installed with:
sudo apt install make        # version 4.3-4.1build1, or
sudo apt install make-guile  # version 4.3-4.1build1
york-earwaker@york-earwaker-XPS-15-9560:~/Documents/dev/repo/coding-practice/ubuntu/cpa/hwd$ command -v g++
york-earwaker@york-earwaker-XPS-15-9560:~/Documents/dev/repo/coding-practice/ubuntu/cpa/hwd$ which g++
york-earwaker@york-earwaker-XPS-15-9560:~/Documents/dev/repo/coding-practice/ubuntu/cpa/hwd$ g++ --version
Command 'g++' not found, but can be installed with:
sudo apt install g++
```

## References

Ubuntu gcc g++
* Checking If GCC Compiler Is Installed On My Linux System, [WS](https://www.osetc.com/en/checking-if-gcc-compiler-is-installed-on-my-linux-system.html), 



