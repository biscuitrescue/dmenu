#!/usr/bin/env bash
set -euo pipefail
set -m

declare -a options=(
    "poweroff"
    "reboot"
    "systemctl suspend"
    "quit"
)

choice=$(printf '%s\n' "${options[@]}" | dmenu -i -l 5 -p 'Are you sure you wanna go?')

if [[ "$choice" == "quit" ]]; then
    exit
elif [ "$choice" ]; then
    cfg=$(printf '%s\n' "${choice}" | awk '{printf $NF}')
    $cfg
else
    exit 1
fi
