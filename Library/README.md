# MyLibrary Makefile

## Overview
This Makefile is designed to build a static and dynamic library named "mylibrary" using C, C++, and assembly source files.

## Author
- Khaled El-Sayed (@t0ti20)

## File Information
- **File:** Makefile
- **Module:** Global
- **Created:** 30.12.2023

## Configurations
- **Target Library Name:** mylibrary
- **Build Directory:** Build
- **Compiler:** gcc
- **Archiver:** ar
- **Compiler Flags:** -Wall -Werror -pedantic -std=c11
- **Linker Flags (Dynamic Library):** -shared
- **Archiver Flags:** rcs
- **External Include Directories:** (Specify any external include directories)

## Source Files
- **C++ Source Files:** (Specify C++ source files)
- **C Source Files:** (Specify C source files)
- **Assembly Source Files:** (Specify assembly source files)
- **Header Files:** (Specify header files)

## Build Targets
- **all:** Build both static and dynamic libraries.
- **static:** Build the static library.
- **dynamic:** Build the dynamic library.
- **clean:** Remove the Build directory and clean up the project.

## How to Use
1. Run `make` to see the available build options.
2. Choose the target library type: static or dynamic.
3. Run `make static` or `make dynamic` based on your choice.

## Example
```bash
make
make static
```

## Clean
To clean the project, run:
```bash
make clean
```

## Notes
- This Makefile assumes a specific project structure. Ensure that source files are organized accordingly.
- Modify the Makefile as needed to fit the project's requirements.