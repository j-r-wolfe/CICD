pipeline {
    agent any

    stages {
        stage("build") {
            steps {
                echo 'building application ...'
                sh 'gcc c -o main.exe main.c'
            }
        }
        stage("execute") {
            steps {
                echo 'executing application ...'
                sh 'main.exe'
            }
        }
    }
}
