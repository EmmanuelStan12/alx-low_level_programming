#!/usr/bin/env bash
git add .
git commit -m "$1"
if [[ "$2" -eq 1 ]]; then
	git push origin master
fi
