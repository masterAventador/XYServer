#!/bin/bash

check_postgresql_installed() {
  if dpkg -l | grep -q postgresql; then
    echo 'PostgreSQL is already installed.'
    return 0
  else
    echo 'PostgreSQL is not installed.'
    return 1
  fi
}

install_postgresql() {
  echo 'Installing PostgreSQL on ubuntu...'
  sudo apt-get update
  sudo apt-get install -y postgresql postgresql-contrib
}

check_postgresql_running() {
  if sudo systemctl is-active --quiet postgresql; then
    echo 'PostgreSQL service isrunning.'
    return 0
  else
    echo 'PostgreSQL service is not running.'
    return 1
  fi
}

start_postgresql_service() {
  echo 'Starting PostgreSQL service...'
  sudo systemctl start postgresql
  sudo systemctl enable postgresql
}

main() {
  if ! check_postgresql_installed; then
    install_postgresql
  fi

  if ! check_postgresql_running; then
    start_postgresql_service
  fi

  echo 'PostgreSQL setup completed.'
}

main