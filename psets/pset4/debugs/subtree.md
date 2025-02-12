
(gdb) print ((Element*)element->key)
Attempt to dereference a generic pointer.
(gdb) print ((Element*)element)->key
$3 = 67 'C'
(gdb) print ((Element*)subtree->item)->key
$4 = 66 'B'
(gdb) c
Continuing.

Breakpoint 2, subtree_insert (subtree=0xaaaaaaab32a0, element=0xaaaaaaab32d0,
    compare=0xaaaaaaaa0d34 <compareElement>) at bintree.c:33
    33          if (subtree == NULL) {
        (gdb) print ((Element*)element)->key
        $5 = 65 'A'
        (gdb) print ((Element*)subtree->item)->key
        $6 = 66 'B'
        (gdb) print ((Element*)subtree->right->item)->key
        $7 = 67 'C'

