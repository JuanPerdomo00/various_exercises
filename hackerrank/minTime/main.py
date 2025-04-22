#!/usr/bin/python3


def minTime(files, numCores, limit):
    total = 0
    paralelizables = []

    for archivo in files:
        if archivo % numCores == 0:
            paralelizables.append(archivo)
        else:
            total += archivo

    paralelizables.sort(reverse=True)

    for i, archivo in enumerate(paralelizables):
        if i < limit:
            total += archivo // numCores
        else:
            total += archivo

    return total

