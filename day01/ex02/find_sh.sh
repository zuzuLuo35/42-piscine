find . -type f -name '*.sh' | sed -E "s/^.*\/(.*)\.sh$/\1/"
