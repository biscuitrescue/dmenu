#!/usr/bin/env bash
set -euo pipefail

read var1 | dmenu -i -l 5

DMEDITOR="emacsclient -c -a emacs"
mydir=/home/karttikeya/.tmp-emacs/

# mkdir -p $mydir
# touch $mydir/$var1
