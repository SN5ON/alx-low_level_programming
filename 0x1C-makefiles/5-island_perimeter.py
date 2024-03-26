#!/usr/bin/python3
"""
Island Perimeter
"""

def island_perimeter(grid):
    """returns the perimeter of the island described in grid

    Args:
    grid (list):
        A list of list of integers representing an island.
    Returns: 
        The perimeter of the island define
    """
    lands = 0
    side = 0
    for height in range(len(grid)):
        for width in range(len(grid[height])):
            if grid[height][width] == 1:
                lands += 1
                if height > 0 and grid[height-1][width] == 1:
                    side += 1
                if width > 0 and grid[height][width-1] == 1:
                    side += 1
    return lands * 4 - side * 2
