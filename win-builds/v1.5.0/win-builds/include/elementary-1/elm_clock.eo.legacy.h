#ifndef _ELM_CLOCK_EO_LEGACY_H_
#define _ELM_CLOCK_EO_LEGACY_H_


/**
 *
 * Set if the given clock widget must show hours in military or
 * am/pm mode
 *
 * This function sets if the clock must show hours in military or
 * am/pm mode. In some countries like Brazil the military mode
 * (00-24h-format) is used, in opposition to the USA, where the
 * am/pm mode is more commonly used.
 *
 * @see elm_clock_show_am_pm_get()
 *
 * @ingroup Clock
 *
 * @param[in] am_pm @c EINA_TRUE to put it in am/pm mode, @c EINA_FALSE
to military mode
 */
EAPI void elm_clock_show_am_pm_set(Eo *obj, Eina_Bool am_pm);

/**
 *
 * Get if the given clock widget shows hours in military or am/pm
 * mode
 *
 * @return @c EINA_TRUE, if in am/pm mode, @c EINA_FALSE if in
 * military
 *
 * This function gets if the clock shows hours in military or am/pm
 * mode.
 *
 * @see elm_clock_show_am_pm_set() for more details
 *
 * @ingroup Clock
 *
 */
EAPI Eina_Bool elm_clock_show_am_pm_get(const Eo *obj);

/**
 *
 * Set the first interval on time updates for a user mouse button hold
 * on clock widgets' time edition.
 *
 * This interval value is @b decreased while the user holds the
 * mouse pointer either incrementing or decrementing a given the
 * clock digit's value.
 *
 * This helps the user to get to a given time distant from the
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
 * @see elm_clock_first_interval_get()
 *
 * @ingroup Clock
 *
 * @param[in] interval The first interval value in seconds
 */
EAPI void elm_clock_first_interval_set(Eo *obj, double interval);

/**
 *
 * Get the first interval on time updates for a user mouse button hold
 * on clock widgets' time edition.
 *
 * @return The first interval value, in seconds, set on it
 *
 * @see elm_clock_first_interval_set() for more details
 *
 * @ingroup Clock
 *
 */
EAPI double elm_clock_first_interval_get(const Eo *obj);

/**
 *
 * Set if the given clock widget must show time with seconds or not
 *
 * This function sets if the given clock must show or not elapsed
 * seconds. By default, they are @b not shown.
 *
 * @see elm_clock_show_seconds_get()
 *
 * @ingroup Clock
 *
 * @param[in] seconds @c EINA_TRUE to show seconds, @c EINA_FALSE otherwise
 */
EAPI void elm_clock_show_seconds_set(Eo *obj, Eina_Bool seconds);

/**
 *
 * Get whether the given clock widget is showing time with seconds
 * or not
 *
 * @return @c EINA_TRUE if it's showing seconds, @c EINA_FALSE otherwise
 *
 * This function gets whether @p obj is showing or not the elapsed
 * seconds.
 *
 * @see elm_clock_show_seconds_set()
 *
 * @ingroup Clock
 *
 */
EAPI Eina_Bool elm_clock_show_seconds_get(const Eo *obj);

/**
 *
 * Set whether a given clock widget is under <b>edition mode</b> or
 * under (default) displaying-only mode.
 *
 * This function makes a clock's time to be editable or not <b>by
 * user interaction</b>. When in edition mode, clocks @b stop
 * ticking, until one brings them back to canonical mode. The
 * elm_clock_edit_mode_set() function will influence which digits
 * of the clock will be editable.
 *
 * @note am/pm sheets, if being shown, will @b always be editable
 * under edition mode.
 *
 * @see elm_clock_edit_get()
 *
 * @ingroup Clock
 *
 * @param[in] edit @c EINA_TRUE to put it in edition, @c EINA_FALSE to
put it back to "displaying only" mode
 */
EAPI void elm_clock_edit_set(Eo *obj, Eina_Bool edit);

/**
 *
 * Retrieve whether a given clock widget is under editing mode
 * or under (default) displaying-only mode.
 *
 * @return @c EINA_TRUE, if it's in edition mode, @c EINA_FALSE otherwise
 *
 * This function retrieves whether the clock's time can be edited
 * or not by user interaction.
 *
 * @see elm_clock_edit_set() for more details
 *
 * @ingroup Clock
 *
 */
EAPI Eina_Bool elm_clock_edit_get(const Eo *obj);

/**
 *
 * Set whether the given clock widget should be paused or not.
 *
 * This function pauses or starts the clock widget.
 *
 * @see elm_clock_pause_get()
 *
 * @ingroup Clock
 * @since 1.9
 *
 * @param[in] paused @c EINA_TRUE to pause clock, @c EINA_FALSE otherwise
 */
EAPI void elm_clock_pause_set(Eo *obj, Eina_Bool paused);

/**
 *
 * Get whether the given clock widget is paused.
 *
 * @return @c EINA_TRUE if it's paused @c EINA_FALSE otherwise
 *
 * This function gets whether the clock is paused or not.
 *
 * @see elm_clock_pause_set()
 *
 * @ingroup Clock
 * @since 1.9
 *
 */
EAPI Eina_Bool elm_clock_pause_get(const Eo *obj);

/**
 *
 * Set a clock widget's time, programmatically
 *
 * This function updates the time that is showed by the clock
 * widget.
 *
 * Values @b must be set within the following ranges:
 * - 0 - 23, for hours
 * - 0 - 59, for minutes
 * - 0 - 59, for seconds,
 *
 * even if the clock is not in "military" mode.
 *
 * @warning The behavior for values set out of those ranges is @b
 * undefined.
 *
 * @ingroup Clock
 *
 * @param[in] hrs The hours to set
 * @param[in] min The minutes to set
 * @param[in] sec The seconds to set
 */
EAPI void elm_clock_time_set(Eo *obj, int hrs, int min, int sec);

/**
 *
 * Get a clock widget's time values
 *
 * This function gets the time set for @p obj, returning
 * it on the variables passed as the arguments to function
 *
 * @note Use @c NULL pointers on the time values you're not
 * interested in: they'll be ignored by the function.
 *
 * @ingroup Clock
 *
 * @param[out] hrs The hours to set
 * @param[out] min The minutes to set
 * @param[out] sec The seconds to set
 */
EAPI void elm_clock_time_get(const Eo *obj, int *hrs, int *min, int *sec);

/**
 *
 * Set what digits of the given clock widget should be editable
 * when in edition mode.
 *
 * @see elm_clock_edit_mode_get()
 *
 * @ingroup Clock
 *
 * @param[in] digedit Bit mask indicating the digits to be editable
(values in #Elm_Clock_Edit_Mode).
 */
EAPI void elm_clock_edit_mode_set(Eo *obj, Elm_Clock_Edit_Mode digedit);

/**
 *
 * Retrieve what digits of the given clock widget should be
 * editable when in edition mode.
 *
 * @return Bit mask indicating the digits to be editable
 * (values in #Elm_Clock_Edit_Mode).
 *
 * @see elm_clock_edit_mode_set() for more details
 *
 * @ingroup Clock
 *
 */
EAPI Elm_Clock_Edit_Mode elm_clock_edit_mode_get(const Eo *obj);

#endif
