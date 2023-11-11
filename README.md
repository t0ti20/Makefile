# Custom Makefiles for Embedded Systems

This repository contains custom Makefiles for building firmware projects targeting embedded systems. The Makefiles are designed to automate the build process for applications using both native and cross toolchains.

## Project Overview

- **Author:** Khaled El-Sayed (@t0ti20)
- **Created:** 05.02.2023

## Contents

1. [Introduction](#introduction)
2. [Folder Structure](#folder-structure)
3. [Build Targets](#build-targets)
4. [Flashing and Erasing](#flashing-and-erasing)
5. [Reading Flash Content](#reading-flash-content)
6. [Cleaning](#cleaning)

## Introduction

This repository provides custom Makefiles tailored for automating the build process of firmware projects targeting embedded systems. The Makefiles support both native and cross toolchains, allowing flexibility in the development environment.

## Folder Structure

- **Application Makefile (Native):** `/Native/Makefile`
- **Embedded System Makefile (Cross):** `/EmbeddedSystem/Makefile`

## Build Targets

- **all:** Build the firmware and generate HEX and BIN files.
- **clean:** Remove all build artifacts.
- **flash:** Flash the generated binary onto the target board.
- **erase:** Erase the flash memory on the target board.

## Flashing and Erasing

To flash the firmware onto the target board, use the following command:

```Bash
make flash
```

To erase the flash memory on the target board, use the following command:

```Bash
make erase
```

## Reading Flash Content

To read the content of the flash memory, use the following command:

```Bash
make read PAGE_NUMBER=<PageNumber> SIZE_PAGES=<SizeInPages>
```
Replace `<PageNumber>` and `<SizeInPages>` with the appropriate values.

## Cleaning

To clean the project and remove all build artifacts, use the following command:

```Bash
make clean
```

Feel free to customize the Makefiles according to your project's specific requirements.

---

**Note:** Replace `<PageNumber>` and `<SizeInPages>` with the actual values when using the `make read` command.