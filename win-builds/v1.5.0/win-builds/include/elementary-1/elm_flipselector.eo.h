#ifndef _ELM_FLIPSELECTOR_EO_H_
#define _ELM_FLIPSELECTOR_EO_H_

#ifndef _ELM_FLIPSELECTOR_EO_TYPES
#define _ELM_FLIPSELECTOR_EO_TYPES


#endif
#define ELM_FLIPSELECTOR_CLASS elm_flipselector_class_get()

const Eo_Class *elm_flipselector_class_get(void) EINA_CONST;

/**
 *
 * Set the interval on time updates for a user mouse button hold
 * on a flip selector widget.
 *
 * This interval value is @b decreased while the user holds the
 * mouse pointer either flipping up or flipping down a given flip
 * selector.
 *
 * This helps the user to get to a given item distant from the
 * current one easier/faster, as it will start to flip quicker and
 * quicker on mouse button holds.
 *
 * The calculation for the next flip interval value, starting from
 * the one set with this call, is the previous interval divided by
 * 1.05, so it decreases a little bit.
 *
 * The default starting interval value for automatic flips is
 * @b 0.85 seconds.
 *
 * @see elm_flipselector_first_interval_get()
 *
 * @ingroup Flipselector
 *
 * @param[in] interval The (first) interval value in seconds
 *
 */
EOAPI void  elm_obj_flipselector_first_interval_set(double interval);

/**
 *
 * Get the interval on time updates for an user mouse button hold
 * on a flip selector widget.
 *
 * @return The (first) interval value, in seconds, set on it
 *
 * @see elm_flipselector_first_interval_set() for more details
 *
 * @ingroup Flipselector
 *
 *
 */
EOAPI double  elm_obj_flipselector_first_interval_get(void);

/**
 *
 * Get the internal list of items in a given flip selector widget.
 *
 * @return The list of items (#Elm_Object_Item as data) or
 * @c NULL on errors.
 *
 * This list is @b not to be modified in any way and must not be
 * freed. Use the list members with functions like
 * elm_object_item_text_set(),
 * elm_object_item_text_get(),
 * elm_object_item_del(),
 * elm_flipselector_item_selected_get(),
 * elm_flipselector_item_selected_set().
 *
 * @warning This list is only valid until @p obj object's internal
 * items list is changed. It should be fetched again with another
 * call to this function when changes happen.
 *
 * @ingroup Flipselector
 *
 *
 */
EOAPI const Eina_List * elm_obj_flipselector_items_get(void);

/**
 *
 * Get the first item in the given flip selector widget's list of
 * items.
 *
 * @return The first item or @c NULL, if it has no items (and on
 * errors)
 *
 * @see elm_flipselector_item_append()
 * @see elm_flipselector_last_item_get()
 *
 * @ingroup Flipselector
 *
 *
 */
EOAPI Elm_Object_Item * elm_obj_flipselector_first_item_get(void);

/**
 *
 * Get the last item in the given flip selector widget's list of
 * items.
 *
 * @return The last item or @c NULL, if it has no items (and on
 * errors)
 *
 * @see elm_flipselector_item_prepend()
 * @see elm_flipselector_first_item_get()
 *
 * @ingroup Flipselector
 *
 *
 */
EOAPI Elm_Object_Item * elm_obj_flipselector_last_item_get(void);

/**
 *
 * Get the currently selected item in a flip selector widget.
 *
 * @return The selected item or @c NULL, if the widget has no items
 * (and on errors)
 *
 * @ingroup Flipselector
 *
 *
 */
EOAPI Elm_Object_Item * elm_obj_flipselector_selected_item_get(void);

/**
 *
 * Prepend a (text) item to a flip selector widget
 *
 * @return A handle to the item added or @c NULL, on errors
 *
 * The widget's list of labels to show will be prepended with the
 * given value. If the user wishes so, a callback function pointer
 * can be passed, which will get called when this same item is
 * selected.
 *
 * @note The current selection @b won't be modified by prepending
 * an element to the list.
 *
 * @note The maximum length of the text label is going to be
 * determined <b>by the widget's theme</b>. Strings larger than
 * that value are going to be @b truncated.
 *
 * @ingroup Flipselector
 *
 * @param[in] label The (text) label of the new item
 * @param[in] func Convenience callback function to take place when
item is selected
 * @param[in] data Data passed to @p func, above
 *
 */
EOAPI Elm_Object_Item * elm_obj_flipselector_item_prepend(const char *label, Evas_Smart_Cb func, void *data);

/**
 *
 * Programmatically select the next item of a flip selector widget
 *
 * @note The selection will be animated. Also, if it reaches the
 * end of its list of member items, it will continue with the first
 * one onwards.
 *
 * @ingroup Flipselector
 *
 *
 */
EOAPI void  elm_obj_flipselector_flip_next(void);

/**
 *
 * Append a (text) item to a flip selector widget
 *
 * @return A handle to the item added or @c NULL, on errors
 *
 * The widget's list of labels to show will be appended with the
 * given value. If the user wishes so, a callback function pointer
 * can be passed, which will get called when this same item is
 * selected.
 *
 * @note The current selection @b won't be modified by appending an
 * element to the list.
 *
 * @note The maximum length of the text label is going to be
 * determined <b>by the widget's theme</b>. Strings larger than
 * that value are going to be @b truncated.
 *
 * @ingroup Flipselector
 *
 * @param[in] label The (text) label of the new item
 * @param[in] func Convenience callback function to take place when
item is selected
 * @param[in] data Data passed to @p func, above
 *
 */
EOAPI Elm_Object_Item * elm_obj_flipselector_item_append(const char *label, Evas_Smart_Cb func, const void *data);

/**
 *
 * Programmatically select the previous item of a flip selector
 * widget
 *
 * @note The selection will be animated. Also, if it reaches the
 * beginning of its list of member items, it will continue with the
 * last one backwards.
 *
 * @ingroup Flipselector
 *
 *
 */
EOAPI void  elm_obj_flipselector_flip_prev(void);

EOAPI extern const Eo_Event_Description _ELM_FLIPSELECTOR_EVENT_SELECTED;
EOAPI extern const Eo_Event_Description _ELM_FLIPSELECTOR_EVENT_UNDERFLOWED;
EOAPI extern const Eo_Event_Description _ELM_FLIPSELECTOR_EVENT_OVERFLOWED;
EOAPI extern const Eo_Event_Description _ELM_FLIPSELECTOR_EVENT_LANGUAGE_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_FLIPSELECTOR_EVENT_ACCESS_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_FLIPSELECTOR_EVENT_FOCUSED;
EOAPI extern const Eo_Event_Description _ELM_FLIPSELECTOR_EVENT_UNFOCUSED;

/**
 * No description
 */
#define ELM_FLIPSELECTOR_EVENT_SELECTED (&(_ELM_FLIPSELECTOR_EVENT_SELECTED))

/**
 * No description
 */
#define ELM_FLIPSELECTOR_EVENT_UNDERFLOWED (&(_ELM_FLIPSELECTOR_EVENT_UNDERFLOWED))

/**
 * No description
 */
#define ELM_FLIPSELECTOR_EVENT_OVERFLOWED (&(_ELM_FLIPSELECTOR_EVENT_OVERFLOWED))

/**
 * No description
 */
#define ELM_FLIPSELECTOR_EVENT_LANGUAGE_CHANGED (&(_ELM_FLIPSELECTOR_EVENT_LANGUAGE_CHANGED))

/**
 * No description
 */
#define ELM_FLIPSELECTOR_EVENT_ACCESS_CHANGED (&(_ELM_FLIPSELECTOR_EVENT_ACCESS_CHANGED))

/**
 * No description
 */
#define ELM_FLIPSELECTOR_EVENT_FOCUSED (&(_ELM_FLIPSELECTOR_EVENT_FOCUSED))

/**
 * No description
 */
#define ELM_FLIPSELECTOR_EVENT_UNFOCUSED (&(_ELM_FLIPSELECTOR_EVENT_UNFOCUSED))

#endif
