pipeline {
    agent any

    stages {
        stage("build") {
            steps {
                echo 'building application ...'
                powershell 'rmdir /s /q CICD'
                powershell 'git clone https://github.com/j-r-wolfe/CICD.git'
                powershell 'cd CICD'
                powershell 'gcc -c -o main.exe main.c'
            }
        }
        stage("execute") {
            steps {
                echo 'executing application ...'
                powershell 'main.exe'
            }
        }
    }
}
