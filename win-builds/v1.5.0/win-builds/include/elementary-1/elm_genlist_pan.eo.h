#ifndef _ELM_GENLIST_PAN_EO_H_
#define _ELM_GENLIST_PAN_EO_H_

#ifndef _ELM_GENLIST_PAN_EO_TYPES
#define _ELM_GENLIST_PAN_EO_TYPES


#endif
#define ELM_GENLIST_PAN_CLASS elm_genlist_pan_class_get()

const Eo_Class *elm_genlist_pan_class_get(void) EINA_CONST;

EOAPI extern const Eo_Event_Description _ELM_GENLIST_PAN_EVENT_LANGUAGE_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_PAN_EVENT_ACCESS_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_PAN_EVENT_FOCUSED;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_PAN_EVENT_UNFOCUSED;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_PAN_EVENT_ITEM_FOCUSED;
EOAPI extern const Eo_Event_Description _ELM_GENLIST_PAN_EVENT_ITEM_UNFOCUSED;

/**
 * No description
 */
#define ELM_GENLIST_PAN_EVENT_LANGUAGE_CHANGED (&(_ELM_GENLIST_PAN_EVENT_LANGUAGE_CHANGED))

/**
 * No description
 */
#define ELM_GENLIST_PAN_EVENT_ACCESS_CHANGED (&(_ELM_GENLIST_PAN_EVENT_ACCESS_CHANGED))

/**
 * No description
 */
#define ELM_GENLIST_PAN_EVENT_FOCUSED (&(_ELM_GENLIST_PAN_EVENT_FOCUSED))

/**
 * No description
 */
#define ELM_GENLIST_PAN_EVENT_UNFOCUSED (&(_ELM_GENLIST_PAN_EVENT_UNFOCUSED))

/**
 * No description
 */
#define ELM_GENLIST_PAN_EVENT_ITEM_FOCUSED (&(_ELM_GENLIST_PAN_EVENT_ITEM_FOCUSED))

/**
 * No description
 */
#define ELM_GENLIST_PAN_EVENT_ITEM_UNFOCUSED (&(_ELM_GENLIST_PAN_EVENT_ITEM_UNFOCUSED))

#endif
