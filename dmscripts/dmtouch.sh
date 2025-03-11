#!/usr/bin/env bash
set -euo pipefail

read file | rofi -dmenu -i -l -p 'File name: '

DMEDITOR="neovide"
