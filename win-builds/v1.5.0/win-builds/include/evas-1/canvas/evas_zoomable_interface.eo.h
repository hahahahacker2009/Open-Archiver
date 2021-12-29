#ifndef _EVAS_ZOOMABLE_INTERFACE_EO_H_
#define _EVAS_ZOOMABLE_INTERFACE_EO_H_

#ifndef _EVAS_ZOOMABLE_INTERFACE_EO_TYPES
#define _EVAS_ZOOMABLE_INTERFACE_EO_TYPES


#endif
#define EVAS_ZOOMABLE_INTERFACE_INTERFACE evas_zoomable_interface_interface_get()

const Eo_Class *evas_zoomable_interface_interface_get(void) EINA_CONST;

EOAPI extern const Eo_Event_Description _EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_START;
EOAPI extern const Eo_Event_Description _EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_STOP;
EOAPI extern const Eo_Event_Description _EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_CHANGED;

/**
 * No description
 */
#define EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_START (&(_EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_START))

/**
 * No description
 */
#define EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_STOP (&(_EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_STOP))

/**
 * No description
 */
#define EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_CHANGED (&(_EVAS_ZOOMABLE_INTERFACE_EVENT_ZOOM_CHANGED))

#endif
