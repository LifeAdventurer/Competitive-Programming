#!/bin/bash

echo "Deleting .bin files..."
find . -type f -name "*.bin" -exec rm -f {} \;

echo "Deleting .exe files..."
find . -type f -name "*.exe" -exec rm -f {} \;

echo "Deletion complete."
