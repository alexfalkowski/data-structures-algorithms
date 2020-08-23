build:
	qb --name data_structures --static

clang-format:
	clang-format -style=google --dry-run --Werror *.c *.h

cppcheck:
	cppcheck --platform=unix64 --error-exitcode=1 --enable=all --suppress=missingIncludeSystem .

lint: clang-format cppcheck

format:
	clang-format -style=google --Werror -i *.c *.h

verify: lint build
