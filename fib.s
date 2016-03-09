.global	fib
.text
fib:
	subui	$sp, $sp, 2
	sw	$12, 0($sp)
	sw	$13, 1($sp)
	lw	$13, 2($sp)
	subi	$12, $13, 1
	subi	$13, $13, 2
	add	$1, $12, $13
L.1:
	lw	$12, 0($sp)
	lw	$13, 1($sp)
	addui	$sp, $sp, 2
	jr	$ra
