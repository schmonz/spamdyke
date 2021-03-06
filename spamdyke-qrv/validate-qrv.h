/*
  spamdyke -- a filter for stopping spam at connection time.
  Copyright (C) 2015 Sam Clippinger (samc (at) silence (dot) org)

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License version 2 as
  published by the Free Software Foundation.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef VALIDATE_QRV_H
#define VALIDATE_QRV_H

struct validate_history
  {
  char *username;
  int strlen_username;
  char *domain;
  struct validate_history *previous;
  };

int validate(struct qrv_settings *current_settings, char *target_recipient_username, int strlen_recipient_username, char *target_recipient_domain, struct validate_history *last);

#endif /* VALIDATE_QRV_H */
