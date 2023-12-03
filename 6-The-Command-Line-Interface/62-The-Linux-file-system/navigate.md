# File System Navigation with Linux Commands

## Introduction
**REMI:** In this video, we navigate through the Linux file system using commands in the Linux command line. The first command we'll learn is `pwd` (print working directory), which shows the current working directory.

## Basic Commands
- `pwd`: Prints the current working directory.
- `ls`: Lists files and folders in the current directory.
- `cd`: Changes the current directory.

## Example Navigation
1. **Print Working Directory:**
   - `pwd` displays the current directory (e.g., `/home/user`).

2. **List Files and Folders:**
   - `ls` lists files (e.g., `program.c`) in the current directory.

3. **Change Directory:**
   - `cd /` changes to the root directory.
   - `ls` lists various folders (e.g., `/bin`, `/etc`, `/home`).

4. **Navigate to Specific Directories:**
   - `cd /home` goes to the home directory.
   - `cd user` enters the user directory.
   - `cd ..` goes back to the parent directory.
   - `cd` (alone) goes back to the home directory using the tilde (~).

## Relative and Absolute Paths
- **Relative Path:**
  - `cd ../..` goes two levels up in the directory structure.
  - `cd sys` enters the sys directory.

- **Absolute Path:**
  - `cd /sys` directly goes to the sys directory.

- **Hidden Files and Directories:**
  - `ls -a` lists hidden files (starting with a dot).

- **Advanced Navigation:**
  - `cd ../../..` goes three levels up in the directory structure.

- **Detailed Listing:**
  - `ls -al` lists files and folders with detailed information.

## Notes on Navigation
- Directories are represented with a 'd', files with a dash.
- Attempting to `cd` into a file (e.g., `program.c`) will fail.
- Absolute paths always start with the root `/`.
- Be cautious with relative paths; absolute paths are safer for programming.

## Conclusion
**REMI:** Now, you know how to navigate through the file system using Linux commands. Experiment with navigating on your own!

