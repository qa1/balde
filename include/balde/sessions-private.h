/*
 * balde: A microframework for C based on GLib and bad intentions.
 * Copyright (C) 2013-2014 Rafael G. Martins <rafael@rafaelmartins.eng.br>
 *
 * This program can be distributed under the terms of the LGPL-2 License.
 * See the file COPYING.
 */

#ifndef _BALDE_SESSIONS_PRIVATE_H
#define _BALDE_SESSIONS_PRIVATE_H

#include <glib.h>

gchar* balde_session_serialize(GHashTable *session);
GHashTable* balde_session_unserialize(const gchar* text);
gchar* balde_session_sign(const guchar *key, gsize key_len,
    const gchar *content);

#endif /* _BALDE_SESSIONS_PRIVATE_H */
