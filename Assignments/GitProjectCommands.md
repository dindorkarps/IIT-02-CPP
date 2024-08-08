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


Create a Repositry in GitHub [GitHub web site]
Add collaborators  [GitHub web site]
open gitbash 
clone repo by all user
> $ git clone https://github.com/username/Demo.git
> git pull
> git branch psd
> git checkout psd 
[do the changes in code]
> git status
> git add .
> git commit -m "fun1 added"
> git push --set-upstream origin psd
[Go to the repositoty on GitHub web site and click on pull requests, create pull request and merge a data to the main branch.]
> git checkout main
> git status
> git pull





