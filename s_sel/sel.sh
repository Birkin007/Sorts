#!/bin/bash

python3 sel.py

# Создание видео из изображений
ffmpeg -framerate 5 -i step_%d.png -c:v libx264 -r 30 -pix_fmt yuv420p sel.mp4
