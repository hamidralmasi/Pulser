#!/bin/bash
make clean
tc qdisc del dev eno2 root
modprobe -r sch_tbf
make
insmod sch_tbf.ko
tc qdisc add dev eno2 root tbf rate 56Mbit burst 20Kb latency 3ms
exec bash
