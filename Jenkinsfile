pipeline {
    agent any

    stages {
        stage("build") {
            steps {
                echo 'building application ...'
                bat 'rmdir /s /q CICD'
                bat 'git clone https://github.com/j-r-wolfe/CICD.git'
                bat 'cd CICD'
                bat 'gcc -c -o main.exe main.c'
            }
        }
        stage("execute") {
            steps {
                echo 'executing application ...'
                bat 'main.exe'
            }
        }
    }
}
