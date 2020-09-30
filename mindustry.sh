#! /usr/bin/env bash

if [ `whoami` != 'root' ]
  then
    echo "You must be root to do this. (/bin is used)"
    exit
fi
mind=$(pwd)
cd /home/$(logname)/.config/
mkdir mindustry
cd /home/$(logname)/.local/share
mkdir Mindustry
cd Mindustry
mkdir builds
cd $mind
cp -a $(pwd)/bin /
read

