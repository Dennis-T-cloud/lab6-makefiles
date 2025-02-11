
default: cse100

cse8a:
	touch cse8a

cse8b: cse8a
	touch cse8b

cse12: cse8b
	touch cse12

cse29: cse8b
	echo 'Taking CSE 29... (you right now!)'
	touch cse29

cse30: cse29
	touch cse30

cse20: cse8b
	touch cse20

cse21: cse20
	touch cse21

cse100: cse21 cse12 cse29
	touch cse100

.PHONY: clean

clean:
	rm -f cse*
