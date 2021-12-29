#ifndef _EVAS_CLICKABLE_INTERFACE_EO_H_
#define _EVAS_CLICKABLE_INTERFACE_EO_H_

#ifndef _EVAS_CLICKABLE_INTERFACE_EO_TYPES
#define _EVAS_CLICKABLE_INTERFACE_EO_TYPES


#endif
#define EVAS_CLICKABLE_INTERFACE_INTERFACE evas_clickable_interface_interface_get()

const Eo_Class *evas_clickable_interface_interface_get(void) EINA_CONST;

EOAPI extern const Eo_Event_Description _EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED;
EOAPI extern const Eo_Event_Description _EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_DOUBLE;
EOAPI extern const Eo_Event_Description _EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_TRIPLE;
EOAPI extern const Eo_Event_Description _EVAS_CLICKABLE_INTERFACE_EVENT_PRESSED;
EOAPI extern const Eo_Event_Description _EVAS_CLICKABLE_INTERFACE_EVENT_UNPRESSED;
EOAPI extern const Eo_Event_Description _EVAS_CLICKABLE_INTERFACE_EVENT_LONGPRESSED;
EOAPI extern const Eo_Event_Description _EVAS_CLICKABLE_INTERFACE_EVENT_REPEATED;

/**
 * No description
 */
#define EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED (&(_EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED))

/**
 * No description
 */
#define EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_DOUBLE (&(_EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_DOUBLE))

/**
 * No description
 */
#define EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_TRIPLE (&(_EVAS_CLICKABLE_INTERFACE_EVENT_CLICKED_TRIPLE))

/**
 * No description
 */
#define EVAS_CLICKABLE_INTERFACE_EVENT_PRESSED (&(_EVAS_CLICKABLE_INTERFACE_EVENT_PRESSED))

/**
 * No description
 */
#define EVAS_CLICKABLE_INTERFACE_EVENT_UNPRESSED (&(_EVAS_CLICKABLE_INTERFACE_EVENT_UNPRESSED))

/**
 * No description
 */
#define EVAS_CLICKABLE_INTERFACE_EVENT_LONGPRESSED (&(_EVAS_CLICKABLE_INTERFACE_EVENT_LONGPRESSED))

/**
 * No description
 */
#define EVAS_CLICKABLE_INTERFACE_EVENT_REPEATED (&(_EVAS_CLICKABLE_INTERFACE_EVENT_REPEATED))

#endif