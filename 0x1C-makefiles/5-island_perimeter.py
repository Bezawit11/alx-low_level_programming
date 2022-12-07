#!/usr/bin/python3
"""  """

def island_perimeter(grid):
    """   """
    sum = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                sum += 4
                if i >= 1:
                    if grid[i - 1][j] == 1:
                        sum -= 1
                if j >= 1:
                    if grid[i][j - 1] == 1:
                        sum -= 1
                if grid[i][j + 1] == 1:
                    sum -= 1
                if grid[i + 1][j] == 1:
                    sum -= 1
    return sum
