/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/*
 * soup-version.h: Version information
 *
 * Copyright (C) 2012 Igalia S.L.
 */

#ifndef SOUP_VERSION_H
#define SOUP_VERSION_H

#include <glib.h>

G_BEGIN_DECLS

#define SOUP_MAJOR_VERSION (2)
#define SOUP_MINOR_VERSION (42)
#define SOUP_MICRO_VERSION (3)

#define SOUP_CHECK_VERSION(major, minor, micro) \
    (SOUP_MAJOR_VERSION > (major) || \
    (SOUP_MAJOR_VERSION == (major) && SOUP_MINOR_VERSION > (minor)) || \
    (SOUP_MAJOR_VERSION == (major) && SOUP_MINOR_VERSION == (minor) && \
     SOUP_MICRO_VERSION >= (micro)))

guint    soup_get_major_version (void);

guint    soup_get_minor_version (void);

guint    soup_get_micro_version (void);

gboolean soup_check_version     (guint major,
				 guint minor,
				 guint micro);

/* Deprecation / Availability macros */

#define SOUP_ENCODE_VERSION(major,minor) ((major) << 16 | (minor) << 8)

#define SOUP_VERSION_2_24 (SOUP_ENCODE_VERSION (2, 24))
#define SOUP_VERSION_2_26 (SOUP_ENCODE_VERSION (2, 26))
#define SOUP_VERSION_2_28 (SOUP_ENCODE_VERSION (2, 28))
#define SOUP_VERSION_2_30 (SOUP_ENCODE_VERSION (2, 30))
#define SOUP_VERSION_2_32 (SOUP_ENCODE_VERSION (2, 32))
#define SOUP_VERSION_2_34 (SOUP_ENCODE_VERSION (2, 34))
#define SOUP_VERSION_2_36 (SOUP_ENCODE_VERSION (2, 36))
#define SOUP_VERSION_2_38 (SOUP_ENCODE_VERSION (2, 38))
#define SOUP_VERSION_2_40 (SOUP_ENCODE_VERSION (2, 40))
#define SOUP_VERSION_2_42 (SOUP_ENCODE_VERSION (2, 42))

/* evaluates to the current stable version; for development cycles,
 * this means the next stable target
 */
#if (SOUP_MINOR_VERSION % 2)
#define SOUP_VERSION_CUR_STABLE (SOUP_ENCODE_VERSION (SOUP_MAJOR_VERSION, SOUP_MINOR_VERSION + 1))
#else
#define SOUP_VERSION_CUR_STABLE (SOUP_ENCODE_VERSION (SOUP_MAJOR_VERSION, SOUP_MINOR_VERSION))
#endif

/* evaluates to the previous stable version */
#if (SOUP_MINOR_VERSION % 2)
#define SOUP_VERSION_PREV_STABLE (SOUP_ENCODE_VERSION (SOUP_MAJOR_VERSION, SOUP_MINOR_VERSION - 1))
#else
#define SOUP_VERSION_PREV_STABLE (SOUP_ENCODE_VERSION (SOUP_MAJOR_VERSION, SOUP_MINOR_VERSION - 2))
#endif

#ifndef SOUP_VERSION_MIN_REQUIRED
# define SOUP_VERSION_MIN_REQUIRED (SOUP_VERSION_CUR_STABLE)
#elif SOUP_VERSION_MIN_REQUIRED == 0
# undef  SOUP_VERSION_MIN_REQUIRED
# define SOUP_VERSION_MIN_REQUIRED (SOUP_VERSION_CUR_STABLE + 2)
#endif

#if !defined (SOUP_VERSION_MAX_ALLOWED) || (SOUP_VERSION_MAX_ALLOWED == 0)
# undef SOUP_VERSION_MAX_ALLOWED
# define SOUP_VERSION_MAX_ALLOWED (SOUP_VERSION_CUR_STABLE)
#endif

/* sanity checks */
#if SOUP_VERSION_MIN_REQUIRED > SOUP_VERSION_CUR_STABLE
#error "SOUP_VERSION_MIN_REQUIRED must be <= SOUP_VERSION_CUR_STABLE"
#endif
#if SOUP_VERSION_MAX_ALLOWED < SOUP_VERSION_MIN_REQUIRED
#error "SOUP_VERSION_MAX_ALLOWED must be >= SOUP_VERSION_MIN_REQUIRED"
#endif
#if SOUP_VERSION_MIN_REQUIRED < SOUP_VERSION_2_24
#error "SOUP_VERSION_MIN_REQUIRED must be >= SOUP_VERSION_2_24"
#endif

#if SOUP_VERSION_MIN_REQUIRED >= SOUP_VERSION_2_24
# define SOUP_DEPRECATED_IN_2_24                GLIB_DEPRECATED
# define SOUP_DEPRECATED_IN_2_24_FOR(f)         GLIB_DEPRECATED_FOR(f)
#else
# define SOUP_DEPRECATED_IN_2_24
# define SOUP_DEPRECATED_IN_2_24_FOR(f)
#endif

#if SOUP_VERSION_MAX_ALLOWED < SOUP_VERSION_2_24
# define SOUP_AVAILABLE_IN_2_24                 GLIB_UNAVAILABLE(2, 24)
#else
# define SOUP_AVAILABLE_IN_2_24
#endif

#if SOUP_VERSION_MIN_REQUIRED >= SOUP_VERSION_2_26
# define SOUP_DEPRECATED_IN_2_26                GLIB_DEPRECATED
# define SOUP_DEPRECATED_IN_2_26_FOR(f)         GLIB_DEPRECATED_FOR(f)
#else
# define SOUP_DEPRECATED_IN_2_26
# define SOUP_DEPRECATED_IN_2_26_FOR(f)
#endif

#if SOUP_VERSION_MAX_ALLOWED < SOUP_VERSION_2_26
# define SOUP_AVAILABLE_IN_2_26                 GLIB_UNAVAILABLE(2, 26)
#else
# define SOUP_AVAILABLE_IN_2_26
#endif

#if SOUP_VERSION_MIN_REQUIRED >= SOUP_VERSION_2_28
# define SOUP_DEPRECATED_IN_2_28                GLIB_DEPRECATED
# define SOUP_DEPRECATED_IN_2_28_FOR(f)         GLIB_DEPRECATED_FOR(f)
#else
# define SOUP_DEPRECATED_IN_2_28
# define SOUP_DEPRECATED_IN_2_28_FOR(f)
#endif

#if SOUP_VERSION_MAX_ALLOWED < SOUP_VERSION_2_28
# define SOUP_AVAILABLE_IN_2_28                 GLIB_UNAVAILABLE(2, 28)
#else
# define SOUP_AVAILABLE_IN_2_28
#endif

#if SOUP_VERSION_MIN_REQUIRED >= SOUP_VERSION_2_30
# define SOUP_DEPRECATED_IN_2_30                GLIB_DEPRECATED
# define SOUP_DEPRECATED_IN_2_30_FOR(f)         GLIB_DEPRECATED_FOR(f)
#else
# define SOUP_DEPRECATED_IN_2_30
# define SOUP_DEPRECATED_IN_2_30_FOR(f)
#endif

#if SOUP_VERSION_MAX_ALLOWED < SOUP_VERSION_2_30
# define SOUP_AVAILABLE_IN_2_30                 GLIB_UNAVAILABLE(2, 30)
#else
# define SOUP_AVAILABLE_IN_2_30
#endif

#if SOUP_VERSION_MIN_REQUIRED >= SOUP_VERSION_2_32
# define SOUP_DEPRECATED_IN_2_32                GLIB_DEPRECATED
# define SOUP_DEPRECATED_IN_2_32_FOR(f)         GLIB_DEPRECATED_FOR(f)
#else
# define SOUP_DEPRECATED_IN_2_32
# define SOUP_DEPRECATED_IN_2_32_FOR(f)
#endif

#if SOUP_VERSION_MAX_ALLOWED < SOUP_VERSION_2_32
# define SOUP_AVAILABLE_IN_2_32                 GLIB_UNAVAILABLE(2, 32)
#else
# define SOUP_AVAILABLE_IN_2_32
#endif

#if SOUP_VERSION_MIN_REQUIRED >= SOUP_VERSION_2_34
# define SOUP_DEPRECATED_IN_2_34                GLIB_DEPRECATED
# define SOUP_DEPRECATED_IN_2_34_FOR(f)         GLIB_DEPRECATED_FOR(f)
#else
# define SOUP_DEPRECATED_IN_2_34
# define SOUP_DEPRECATED_IN_2_34_FOR(f)
#endif

#if SOUP_VERSION_MAX_ALLOWED < SOUP_VERSION_2_34
# define SOUP_AVAILABLE_IN_2_34                 GLIB_UNAVAILABLE(2, 34)
#else
# define SOUP_AVAILABLE_IN_2_34
#endif

#if SOUP_VERSION_MIN_REQUIRED >= SOUP_VERSION_2_36
# define SOUP_DEPRECATED_IN_2_36                GLIB_DEPRECATED
# define SOUP_DEPRECATED_IN_2_36_FOR(f)         GLIB_DEPRECATED_FOR(f)
#else
# define SOUP_DEPRECATED_IN_2_36
# define SOUP_DEPRECATED_IN_2_36_FOR(f)
#endif

#if SOUP_VERSION_MAX_ALLOWED < SOUP_VERSION_2_36
# define SOUP_AVAILABLE_IN_2_36                 GLIB_UNAVAILABLE(2, 36)
#else
# define SOUP_AVAILABLE_IN_2_36
#endif

#if SOUP_VERSION_MIN_REQUIRED >= SOUP_VERSION_2_38
# define SOUP_DEPRECATED_IN_2_38                GLIB_DEPRECATED
# define SOUP_DEPRECATED_IN_2_38_FOR(f)         GLIB_DEPRECATED_FOR(f)
#else
# define SOUP_DEPRECATED_IN_2_38
# define SOUP_DEPRECATED_IN_2_38_FOR(f)
#endif

#if SOUP_VERSION_MAX_ALLOWED < SOUP_VERSION_2_38
# define SOUP_AVAILABLE_IN_2_38                 GLIB_UNAVAILABLE(2, 38)
#else
# define SOUP_AVAILABLE_IN_2_38
#endif

#if SOUP_VERSION_MIN_REQUIRED >= SOUP_VERSION_2_40
# define SOUP_DEPRECATED_IN_2_40                GLIB_DEPRECATED
# define SOUP_DEPRECATED_IN_2_40_FOR(f)         GLIB_DEPRECATED_FOR(f)
#else
# define SOUP_DEPRECATED_IN_2_40
# define SOUP_DEPRECATED_IN_2_40_FOR(f)
#endif

#if SOUP_VERSION_MAX_ALLOWED < SOUP_VERSION_2_40
# define SOUP_AVAILABLE_IN_2_40                 GLIB_UNAVAILABLE(2, 40)
#else
# define SOUP_AVAILABLE_IN_2_40
#endif

#if SOUP_VERSION_MIN_REQUIRED >= SOUP_VERSION_2_42
# define SOUP_DEPRECATED_IN_2_42                GLIB_DEPRECATED
# define SOUP_DEPRECATED_IN_2_42_FOR(f)         GLIB_DEPRECATED_FOR(f)
#else
# define SOUP_DEPRECATED_IN_2_42
# define SOUP_DEPRECATED_IN_2_42_FOR(f)
#endif

#if SOUP_VERSION_MAX_ALLOWED < SOUP_VERSION_2_42
# define SOUP_AVAILABLE_IN_2_42                 GLIB_UNAVAILABLE(2, 42)
#else
# define SOUP_AVAILABLE_IN_2_42
#endif

G_END_DECLS

#endif /* SOUP_VERSION_H */
