pipeline {
    agent any

    stages {
        stage("build") {
            steps {
                echo 'building application ...'
                bat 'gcc c -o main.exe main.c'
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
