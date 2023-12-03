# File Operations and System Exploration in Linux

## File Type Determination

1. **Check Type of a File:**
   - Using the `file` command: `file program.c`.
   - Example: The file is identified as a C source encoded in ASCII text.

2. **Create and Edit a File:**
   - Use the `nano` editor to create a new file: `nano f`.
   - Add content and save using `Ctrl O` and exit with `Ctrl X`.

3. **Check Type of Created File:**
   - Use `file f` to determine the type of the new file.
   - Example: The file is identified as ASCII text.

4. **Get Real Path of a File:**
   - Use `realpath` to find the absolute path of a file: `realpath f`.
   - Example: The real path is `/home/user/f`.

## System Exploration

5. **Explore Root Directory:**
   - Navigate to the root directory: `cd /` and list files using `ls`.

6. **Check Type of System Directories:**
   - Use `file` to check the type of system directories (e.g., `/bin`).
   - Explore directories and check file types.

7. **Explore Kernel Directory:**
   - Navigate to `/sys/kernel` and list files.
   - Use `file` to determine the type of files (e.g., `notes`, `fscaps`).

## Finding Installed Binaries

8. **Locate Binary Paths:**
   - Use `which` to find the path of installed binaries.
   - Examples:
     - `which realpath`: `/usr/bin/realpath`.
     - `which cat`: `/bin/cat`.
     - `which which`: `/usr/bin/which`.
     - `which file`: `/usr/bin/file`.
     - `which ls`: `/bin/ls`.

