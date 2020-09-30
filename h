[1mdiff --git a/bin/mindustry b/bin/mindustry[m
[1mindex 1548b9f..f5d80c5 100755[m
[1m--- a/bin/mindustry[m
[1m+++ b/bin/mindustry[m
[36m@@ -1,5 +1,5 @@[m
 #! /usr/bin/env bash[m
[31m-if [[ $1 -eq update ]][m
[32m+[m[32mif [[ $1 -eq "update" ]][m
 then[m
    if [[ -e /home/$(logname)/.config/mindustry/BE ]][m
    then[m
[36m@@ -7,10 +7,11 @@[m [mthen[m
    else[m
        mindustry-update[m
    fi[m
[32m+[m[32m   echo updoot[m
    exit[m
 fi[m
 [m
[31m-if [[ $1 -eq run ]][m
[32m+[m[32mif [[ $1 -eq "run" ]][m
 then[m
    if [[ -e /home/$(logname)/.config/mindustry/BE ]][m
    then[m
[36m@@ -18,17 +19,19 @@[m [mthen[m
    else[m
        mindustry-run[m
    fi[m
[32m+[m[32m    echo "run for the hills"[m
    exit[m
 fi[m
 [m
[31m-if [[ $1 -eq BE]][m
[32m+[m[32mif [[ $1 -eq "BE" ]][m
 then[m
    if [[ -e /home/$(logname)/.config/mindustry/BE]][m
    then[m
[31m-       rm home/$(logname)/.config/mindustry/BE[m
[32m+[m[32m       rm /ome/$(logname)/.config/mindustry/BE[m
    else[m
[31m-       echo BE > home/$(logname)/.config/mindustry/BE[m
[32m+[m[32m       echo BE > /home/$(logname)/.config/mindustry/BE[m
    fi[m
[32m+[m[32m    echo "beta bugs"[m
    exit [m
 fi[m
 [m
