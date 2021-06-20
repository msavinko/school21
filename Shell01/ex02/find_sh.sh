#!/bin/bash

find . -type f -name "*.sh" | sed -e 's/\.sh$//' | tr -d './'
