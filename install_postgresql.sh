#!/bin/bash

sudo pacman -S postgresql postgresql-libs

sudo -iu postgres initdb --locale=pt_BR.UTF-8 -E UTF8 -D /var/lib/postgres/data

sudo systemctl start postgresql

sudo systemctl status postgresql
