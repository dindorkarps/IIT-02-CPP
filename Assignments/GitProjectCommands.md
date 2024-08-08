## How to use Git for creating multiple branches and add data to Repository.
1. Create a Repositry in GitHub
2. Clone the project in location where you want to create a project.
3. after cloning add .gitignore file and push into main branch.
4. create frame of project and also push into main branch.
5. add user in your project


$ git clone https://github.com/username/Demo.git
Cloning into 'Demo'...
warning: You appear to have cloned an empty repository**

## Git data add process
1. git status --> check git status 
2. git add filename --> to add perticular file
3. git add . --> for all files
4. git status --> check git status 
5. git push 


## know its time to create a branch | example
1. git branch branchname -->  git branch branch1 
2. git checkout branchname --> git checkout branch1 --> shifting from main to branch1 branch
3. change code here or add new code.
4. again check status and all things
5. push data on your branch after successfull pushing data
6. Go to the repositoty and click on pull requests, create pull request and merge a data to the main branch.
7. Come to the gitbash and switch branch to main branch.
8. Pull all data from repository to your project.
9. check project all data come in properly.

Same thing you can done from creating the multiple branches.

## Conflict
If any conflict come in pulling a request then first check a conflict and do further process.

**Thank You!!!!**
======================================================================================
Create a Repositry in GitHub [GitHub web site]
Add collaborators  [GitHub web site]
open gitbash 
clone repo by all user
> $ git clone https://github.com/username/Demo.git
> delete .git folder from downloaded directory
> open git bash -> git init
> git remote add origin https://github.com/dindorkarps/classDemo.git
>  git branch -M main
> git pull
> go to folder and open cmd and give command to open vs code
        > code . 
> create file and write code in vscode
>  git add .
> git commit  -m "demo1 added"
>git push -u origin main
> git branch psd
> git checkout psd 
[do the changes in code on your branch]
> git status
> git add .
> git commit -m "fun1 added"
> git push --set-upstream origin psd
[Go to the repositoty on GitHub web site and click on pull requests, create pull request and merge a data to the main branch.]
> git checkout main
> git status
> git pull


-----------------------------------------------------------
sunbeam@Pradnya-PC MINGW64 ~/Desktop/classDemo
$ git init
Initialized empty Git repository in C:/Users/sunbeam/Desktop/classDemo/.git/

sunbeam@Pradnya-PC MINGW64 ~/Desktop/classDemo (master)
$ git remote add origin https://github.com/dindorkarps/classDemo.git

sunbeam@Pradnya-PC MINGW64 ~/Desktop/classDemo (master)
$ git branch -M main

sunbeam@Pradnya-PC MINGW64 ~/Desktop/classDemo (main)
$ git pull
There is no tracking information for the current branch.
Please specify which branch you want to merge with.
See git-pull(1) for details.

    git pull <remote> <branch>

If you wish to set tracking information for this branch you can do so with:

    git branch --set-upstream-to=origin/<branch> main

sunbeam@Pradnya-PC MINGW64 ~/Desktop/classDemo (main)
$ git status
On branch main

No commits yet

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        demo1.cpp

nothing added to commit but untracked files present (use "git add" to track)

sunbeam@Pradnya-PC MINGW64 ~/Desktop/classDemo (main)
$ git add .

sunbeam@Pradnya-PC MINGW64 ~/Desktop/classDemo (main)
$ git commit  -m "demo1 added"
[main (root-commit) 8c782df] demo1 added
 1 file changed, 1 insertion(+)
 create mode 100644 demo1.cpp

sunbeam@Pradnya-PC MINGW64 ~/Desktop/classDemo (main)
$ git push -u origin main
Enumerating objects: 3, done.
Counting objects: 100% (3/3), done.
Writing objects: 100% (3/3), 217 bytes | 217.00 KiB/s, done.
Total 3 (delta 0), reused 0 (delta 0), pack-reused 0
To https://github.com/dindorkarps/classDemo.git
 * [new branch]      main -> main
branch 'main' set up to track 'origin/main'.

sunbeam@Pradnya-PC MINGW64 ~/Desktop/classDemo (main)
$ git branch psd

sunbeam@Pradnya-PC MINGW64 ~/Desktop/classDemo (main)
$ git checkout psd
Switched to branch 'psd'

sunbeam@Pradnya-PC MINGW64 ~/Desktop/classDemo (psd)
$ git status
On branch psd
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   demo1.cpp

no changes added to commit (use "git add" and/or "git commit -a")

sunbeam@Pradnya-PC MINGW64 ~/Desktop/classDemo (psd)
$ git add .

sunbeam@Pradnya-PC MINGW64 ~/Desktop/classDemo (psd)
$ git commit -m "code added"
[psd 23e2f05] code added
 1 file changed, 7 insertions(+), 1 deletion(-)

sunbeam@Pradnya-PC MINGW64 ~/Desktop/classDemo (psd)
$ git push
fatal: The current branch psd has no upstream branch.
To push the current branch and set the remote as upstream, use

    git push --set-upstream origin psd

To have this happen automatically for branches without a tracking
upstream, see 'push.autoSetupRemote' in 'git help config'.


sunbeam@Pradnya-PC MINGW64 ~/Desktop/classDemo (psd)
$ git push --set-upstream origin psd
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 8 threads
Compressing objects: 100% (2/2), done.
Writing objects: 100% (3/3), 318 bytes | 318.00 KiB/s, done.
Total 3 (delta 0), reused 0 (delta 0), pack-reused 0
remote:
remote: Create a pull request for 'psd' on GitHub by visiting:
remote:      https://github.com/dindorkarps/classDemo/pull/new/psd
remote:
To https://github.com/dindorkarps/classDemo.git
 * [new branch]      psd -> psd
branch 'psd' set up to track 'origin/psd'.

sunbeam@Pradnya-PC MINGW64 ~/Desktop/classDemo (psd)
$ git checkout main
Switched to branch 'main'
Your branch is up to date with 'origin/main'.

sunbeam@Pradnya-PC MINGW64 ~/Desktop/classDemo (main)
$ git status
On branch main
Your branch is up to date with 'origin/main'.

nothing to commit, working tree clean

sunbeam@Pradnya-PC MINGW64 ~/Desktop/classDemo (main)
$ git pull
remote: Enumerating objects: 1, done.
remote: Counting objects: 100% (1/1), done.
remote: Total 1 (delta 0), reused 0 (delta 0), pack-reused 0
Unpacking objects: 100% (1/1), 893 bytes | 446.00 KiB/s, done.
From https://github.com/dindorkarps/classDemo
   8c782df..a1348a8  main       -> origin/main
Updating 8c782df..a1348a8
Fast-forward
 demo1.cpp | 8 +++++++-
 1 file changed, 7 insertions(+), 1 deletion(-)








