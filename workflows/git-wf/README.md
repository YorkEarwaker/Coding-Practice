# git workflow git-wf

Local host use of git with git compliant remote repositories like GitHub GitLab Bitbucket SourceForge others to list .

## Notes
Notes to self.

Useful things to do with git. 

## Status
TODO
* <todo: consider, attempt git 'clone' equivalent to an existing non empty director using; git init, git remote add origin `<url>`, git fetch, and git checkout >

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
$ git add <a-file> <directory> <directory-two> <dir-other> <x-file> <.hidden-file> 
$ git status
$ git commit -m "git local learning"
$ git push origin
```

## References

Git docs
* Http Protocol, [WS](https://git-scm.com/docs/http-protocol), Git
* 2.1 Git Basics - Getting a Git Repository, [WS](https://git-scm.com/book/en/v2/Git-Basics-Getting-a-Git-Repository), Git
* ...

News Papers - usage
* Git: What's the best practice to "git clone" into an existing folder? [WS](https://stackoverflow.com/questions/5377960/git-whats-the-best-practice-to-git-clone-into-an-existing-folder), 21 Mar 2011, StackOverflow, 
* How do I clone into a non-empty directory? [WS](https://stackoverflow.com/questions/2411031/how-do-i-clone-into-a-non-empty-directory), 9 Mar 2010, StackOverflow, 
