#!/bin/bash

python3 inser.py

# Создание видео из изображений
ffmpeg -framerate 80 -i step_%d.png -c:v libx264 -r 30 -pix_fmt yuv420p inser.mp4
