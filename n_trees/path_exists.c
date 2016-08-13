start at depth 0
start node to check at tree

while path[i] != NULL:
	check if path[i] is in a node at given depth:
		if depth is at 0, simply check node->str:
			return 0 if node->str != path[i]
		else check each node in linked list:
			return 0 if none of the nodes have a str == path[i]

loops were successfully completed (meaning a match for each path[i] was found):
return 1
