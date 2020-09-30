#! /usr/bin/env bash

if [ `whoami` != 'root' ]
  then
    echo "You must be root to do this. (/bin is used)"
    exit
fi
mind=$PWD
cd /bin
rm mindustry*
cd $mind
