def position_to_coordinates(position):
    x = position % 8
    y = (position // 8)
    return x,y

def get_possible_moves(x,y):
    all_moves = []
    all_moves.append((x+2, y+1))
    all_moves.append((x+2, y-1))
    all_moves.append((x-2, y+1))
    all_moves.append((x-2, y-1))
    all_moves.append((x+1, y+2))
    all_moves.append((x+1, y-2))
    all_moves.append((x-1, y+2))
    all_moves.append((x-1, y-2))

    valid_moves = []
    for (x,y) in all_moves:
        if(0<=x<=7 and 0<=y<=7):
            valid_moves.append((x,y))
    return valid_moves


def solution(src, dest):
    #Your code here
    if src == dest:
        return 0
    src_x, src_y = position_to_coordinates(src)
    dest_x, dest_y = position_to_coordinates(dest)
    queue = get_possible_moves(src_x, src_y)
    depth_queue = []
    depth = 0 

    while True:
        depth += 1
        for move in queue:
            if move[0] == dest_x and move[1] == dest_y:
                return depth
            depth_queue.extend(get_possible_moves(move[0], move[1]))

        queue = depth_queue
        depth_queue = []