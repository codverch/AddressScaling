#!/bin/bash

# Download the Miniconda installer for Linux:
wget https://repo.anaconda.com/miniconda/Miniconda3-latest-Linux-x86_64.sh

# Execute the installer script:
bash Miniconda3-latest-Linux-x86_64.sh

# Activate the changes in your current terminal session:
source ~/.bashrc  # Alternatively, you can close and reopen the terminal.

# Synchronize package lists for access to the latest versions (if necessary):
sudo apt update

# Install the required libraries:
sudo apt install -y libbz2-dev libsqlite3-dev

# Add new repository to sources list:
sudo vim /etc/apt/sources.list
# Add the following line:
# deb http://dk.archive.ubuntu.com/ubuntu/ bionic main universe

# Update apt:
sudo apt update

# Install GCC 6:
sudo apt-get install gcc-6 g++-6 -y

# Update alternatives for GCC and G++:
sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-6
sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-6

# Set the default Pin version as pin_kit_v3.7:
export PIN_ROOT=$(realpath pin_kit_v3.7)

cd sniper
cd sift
make clean
make
cd ..
make
