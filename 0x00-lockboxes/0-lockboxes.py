#!/usr/bin/python3
def canUnlockAll(boxes):
    keys = [0]
    for list in boxes:
        for key in list:
            if(key != boxes.index(list) and key not in keys):
                keys.append(key)
    return len(boxes) == len(keys)
