#!/bin/sh
# $FreeBSD: releng/11.0/usr.bin/alias/generic.sh 151635 2005-10-24 22:32:19Z cperciva $
# This file is in the public domain.
builtin ${0##*/} ${1+"$@"}
