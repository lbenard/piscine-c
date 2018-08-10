#!/bin/sh
basename $(find . -type f -name "*.sh" -print) | cut -d '.' -f1
