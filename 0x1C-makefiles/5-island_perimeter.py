#!/usr/bin/python3
"""
This file contains the function island_perimeter
"""


def cell_perimeter(grid, i, j):
    """Determines the perimeter of a cell"""
    p = 0

    if i <= 0 or grid[i - 1][j] == 0:
        p += 1
    if j <= 0 or grid[i][j - 1] == 0:
        p += 1
    if j >= len(grid[i]) - 1 or grid[i][j + 1] == 0:
        p += 1
    if i >= len(grid) - 1 or grid[i + 1][j] == 0:
        p += 1

    return p


def island_perimeter(grid):
    """
    This function finds the perimeter of an island
    """
    perim = 0
    for i, row in enumerate(grid):
        for j, cell in enumerate(row):
            if cell == 1:
                perim += cell_perimiter(grid, i, j)
    return perim
