# git workflow git-wf

Local host use of git with git compliant remote repositories like GitHub GitLab Bitbucket SourceForge others to list

## Notes

Useful things to do with git.

## Status
TODO
* <todo: consider, attempt git 'clone' equivalent to an existing non empty director using; git init, git remote add origin `\<url\>`, git fetch, and git checkout >

DONE
* <done: consider, intent to commit>

## Output

### Clone a repo into and existing non empty directory structure

Get the .git folder history from remote server repo
```
$ mkdir temp
$ git clone https://github.com/YorkEarwaker/Coding-Practice.git temp
$ mv temp/.git coding-practice/.git
$ rm -rf temp
```

First commit using local git
```
$ git remote -v
origin	https://github.com/YorkEarwaker/Coding-Practice.git (fetch)
origin	https://github.com/YorkEarwaker/Coding-Practice.git (push)
$ git status
$ git add cabs codewars rpi-os ubuntu workflows LICENCE .gitignore README.md
$ git status
$ git commit -m "git local learning"
$ git push origin
```

## References

Git docs
* Http Protocol, [WS](https://git-scm.com/docs/http-protocol), Git

News Papers - usage
* Git: What's the best practice to "git clone" into an existing folder? [WS](https://stackoverflow.com/questions/5377960/git-whats-the-best-practice-to-git-clone-into-an-existing-folder), StackOverflow, 
