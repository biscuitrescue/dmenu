#!/usr/bin/env bash
set -euo pipefail

read file | dmenu -i -l -p 'File name: '

DMEDITOR="neovide"
