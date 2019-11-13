#!/bin/bash

# Copyright 2015-2018 Joao Eriberto Mota Filho <eriberto@eriberto.pro.br>
# Create a manpage using txt2man command.
#
# This script can be used under BSD-3-Clause license.

T2M_DATE="02 Dec 2018"
T2M_NAME=nbtscan
T2M_VERSION=1.5.1
T2M_LEVEL=1
T2M_DESC="scan networks searching for NetBIOS information"

# Don't change the following line
txt2man -d "$T2M_DATE" -t $T2M_NAME -r $T2M_NAME-$T2M_VERSION -s $T2M_LEVEL -v "$T2M_DESC" $T2M_NAME.txt > $T2M_NAME.$T2M_LEVEL
