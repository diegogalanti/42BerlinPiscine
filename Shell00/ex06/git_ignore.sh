#! /bin/sh

git status --porcelain --ignored=matching | awk '/!!/ {print $2}' | sed "s/.*\///"
