#! /usr/bin/env bash
if [ `whoami` != 'root' ]
  then
    echo "need root to setup"
    exit 1
fi
mind = (pwd)
cd /home/$(logname)/.config/
mkdir mindustry
cd $mind
cp -a /bin/. /usr/bin

