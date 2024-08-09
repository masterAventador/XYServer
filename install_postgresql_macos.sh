#!/bin/bash

POSTGRESQL=postgresql@14

check_postgresql_installed() {
  if brew list $POSTGRESQL &>/dev/null; then
    echo 'PostgreSQL is already installed.'
    return 0
  else
    echo 'PostgreSQL is not installed.'
    return 1
  fi
}

install_postgresql() {
  echo 'Installing PostgreSQL on macOS...'
  brew update
  brew install $POSTGRESQL
}

check_postgresql_running() {
  if pg_ctl -D /opt/homebrew/var/$POSTGRESQL status &>/dev/null; then
    echo 'PostgreSQL service is running.'
    return 0
  else
    echo 'PostgreSQL service is not running.'
    return 1
  fi
}

start_postgresql_service() {
  echo 'Starting PostgreSQL service...'
#  brew service start postgresql  # I don't want PostgreSQL to start immediately after the system starts every time.
  pg_ctl -D /opt/homebrew/var/$POSTGRESQL start

  # create a super user
  psql -d postgres
  CREATE USER postgres WITH SUPERUSER CREATEDB CREATEROLE PASSWORD 'secret';
}

main() {
  if ! check_postgresql_installed; then
    install_postgresql
  fi

  if ! check_postgresql_running; then
    start_postgresql_service
  fi
}

main