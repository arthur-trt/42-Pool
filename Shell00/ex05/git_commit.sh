#/bin/sh

git log --pretty=format:%H -5 | sed 's/%/\n/'

