#!/bin/sh

case $1 in
	1|2|3|4)
		make ea6700z -j$1 2>&1 |tee $(date +'%Y%m%d-%H').log
		;;
	p)
		make $2 2>&1 | tee $(date +'%Y%m%d-%H').log
		;;
	*)
		make  ea6700z 2>&1 |tee $(date +'%Y%m%d-%H').log
		;;
esac
