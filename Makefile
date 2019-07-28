gitpush:
	git add Makefile LICENSE
	git add *.[cis] *.md
	git status
	git commit -m "regular commit"
	git push -u origin master