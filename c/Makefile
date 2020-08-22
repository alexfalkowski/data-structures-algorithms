build:
	qb --name data-structures --static

clang-format:
	clang-format -style=google --dry-run --Werror *.c

cppcheck:
	cppcheck --platform=unix64 --error-exitcode=1 --enable=all --suppress=missingIncludeSystem .

lint: clang-format cppcheck

format:
	clang-format -style=google --Werror -i *.c
