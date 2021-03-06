#ifndef _ELM_FLIPSELECTOR_EO_LEGACY_H_
#define _ELM_FLIPSELECTOR_EO_LEGACY_H_


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
 */
EAPI void elm_flipselector_first_interval_set(Eo *obj, double interval);

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
 */
EAPI double elm_flipselector_first_interval_get(const Eo *obj);

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
 */
EAPI const Eina_List *elm_flipselector_items_get(const Eo *obj);

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
 */
EAPI Elm_Object_Item *elm_flipselector_first_item_get(const Eo *obj);

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
 */
EAPI Elm_Object_Item *elm_flipselector_last_item_get(const Eo *obj);

/**
 *
 * Get the currently selected item in a flip selector widget.
 *
 * @return The selected item or @c NULL, if the widget has no items
 * (and on errors)
 *
 * @ingroup Flipselector
 *
 */
EAPI Elm_Object_Item *elm_flipselector_selected_item_get(const Eo *obj);

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
 */
EAPI Elm_Object_Item *elm_flipselector_item_prepend(Eo *obj, const char *label, Evas_Smart_Cb func, void *data);

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
 */
EAPI void elm_flipselector_flip_next(Eo *obj);

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
 */
EAPI Elm_Object_Item *elm_flipselector_item_append(Eo *obj, const char *label, Evas_Smart_Cb func, const void *data);

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
 */
EAPI void elm_flipselector_flip_prev(Eo *obj);

#endif
