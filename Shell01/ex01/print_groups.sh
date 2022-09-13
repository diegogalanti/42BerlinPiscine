#! /bin/sh

groups $FT_USER | sed "s/.*: //" | sed "s/ /,/" | sed -z "s/\n//"
