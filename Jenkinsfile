pipeline {
    agent any

    stages {
        stage("build") {
            steps {
                echo 'building application ...'
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
