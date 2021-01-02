import pygame
import game_config as gc

from pygame import display, event, image
from animal import Animal

pygame.init()

display.set_caption('My Game')
screen = display.set_mode((512, 512))
matched = image.load('other_assets/matched.png')

running = True
tiles = [Animal(i) for i in range(0, gc.NUM_TILES_TOTAL)]

while running:
    current_events = event.get()

    for e in current_events:
        if e.type == pygame.QUIT:
            running = False

    screen.fill((255, 255, 255))

    for tile in tiles:
        screen.blit(tile.image, (tile.col * gc.IMAGE_SIZE + gc.MARGIN, tile.row * gc.IMAGE_SIZE + gc.MARGIN))

    display.flip()

print('Goodbye')