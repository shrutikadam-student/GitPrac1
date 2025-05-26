git branch feature-login
git checkout branch_name
git checkout -b branch_name

git clone <repository-url>
git add file.txt
git add .
git status
git commit -m "your message"
git log
git push origin branch_name
git pull origin branch_name
git merge branch_name


git add conflict-file.txt
git commit -m "Resolve conflict"


git reset --soft HEAD~1`
git reset --mixed HEAD~1`
git reset --hard HEAD~1`
git reset --hard <commit-hash>`
git reset --soft <commit-hash>`
git reset HEAD~`

1.Restore:
git checkout main  # Switch to another branch before deleting
git branch -d feature/payment  # Delete the branch
git reflog
git checkout -b branchname refloghash

2.merge
git checkout -b feature/login
echo "<h1>Login Page</h1>" > login.html
git add login.html
git commit -m "Added initial login page"
git checkout main
git merge feature/login
git status
nano login.html
git add login.html
git commit -m "Resolved merge conflict in login.html"
git log --graph --oneline --all
git branch -d feature/login

5.buggy code
git checkout -b debug-utils
echo "function processData() { /* buggy code here */ }" >> utils.js
git add utils.js
git commit -m "Added utils.js with processData function"
git checkout main
git merge debug-utils
git status
git blame -L 5,5 utils.js  
git show <commit-hash>  

6.remote sync
git fetch origin  
git status  
git diff origin/main  
git merge origin/main 
Or git pull origin main
git log --oneline --graph --all  
git status 

7. Temp save stash
git checkout -b feature/improvement
echo "New feature code" > feature.txt
git add feature.txt
git commit -m "Working on feature improvement"
git checkout main
git stash push -m "WIP: Feature improvement in progress"
git stash list
echo "Bug fixed" > bugfix.txt
git add bugfix.txt
git commit -m "Critical bug fix in main"
git checkout feature/improvement
git stash pop
git status
git log --oneline --graph --all

8.publish local branch :git push -u origin feature
9.git log --oneline
git rebase -i HEAD~3  #"pick" to "squash"
git commit --amend -m "Combine feature commits into one"
git log --oneline
10.revert tag version
echo "Line 4: Buggy feature" >> data.txt
git add data.txt
git commit -m "Commit 3: Add Line 4 with buggy feature"
git tag v2.0
git push origin v2.0
git log --oneline --decorate
git reset --hard v1.5
git checkout v1.5
git push --force origin v1.5

11.differcnes
git diff main dev 
git log main..dev --oneline

12. Reapply a Lost Commit  :
git reflog
git reset –hard hashvl
git log —-oneline

13.fix a commit msg:
git commit -m "Fixed issuw"
git commit --amend -m "Fixed issue"
git log --oneline -n 1

14.fork
git clone https://github.com/your-username/repository-name.git
cd repository-name
git remote add upstream https://github.com/original-author/repository-name.git
git fetch upstream
git checkout main
git merge upstream/main

15.rebase 
git checkout feature/cart
git fetch origin
git rebase origin/main
git status
git log --oneline --graph --all

16.track file : git log —- readme.md
17.partial staging:
git add -p styles.css
git commit -m "Updated styles.css"
git status

18.revert commit
git checkout main
echo "Buggy code introduced" >> buggy.txt
git add buggy.txt
git commit -m "Buggy commit in main"
git push origin main
git log --oneline --decorate  
git revert <commit-hash>
git push origin main
git log --oneline --graph --all  

19.rename branch
git branch -m bug/typo bug/readme-typo

20.checkout file only
git checkout main -- index.html
git status
git commit -m "Restored index.html from main"

21.find delete line/funt
Git log -S “critical_function” —- file.txt

22.clone branch
git clone --single-branch -b dev https://github.com/user/repository.git
23.override corrupt remote
git checkout -b recover-main
echo "Fixing corrupted version" >> recovery.txt
git add recovery.txt
git commit -m "Restoring stable version"
git checkout main
git reset --hard recover-main
git push -f origin main
