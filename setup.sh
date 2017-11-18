#!/bin/bash

DIRECTORY=googletest

if [ ! -d "$DIRECTORY" ]; then
  git clone https://github.com/google/googletest.git
fi

