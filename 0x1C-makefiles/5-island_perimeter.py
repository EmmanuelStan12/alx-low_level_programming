#!/usr/bin/python3
"""
This file contains the function island_perimeter
"""

def island_perimeter(grid):
    """
    This function finds the perimeter of an island
    """
    perim = 0
    for i, row in enumerate(grid):
        if i == 0:
            continue
        for j, cell in enumerate(row):
            if j == 0 or j == len(row) - 1:
                continue
            if cell == 1:
                cell_above = grid[i - 1][j]
                cell_left = row[j - 1]
                cell_right = row[j + 1]
                cell_below = grid[i + 1][j]
                if cell_above == 0:
                    perim = perim + 1
                if cell_below == 0:
                    perim = perim + 1
                if cell_left == 0:
                    perim = perim + 1
                if cell_below == 0:
                    perim = perim + 1
    return perim
