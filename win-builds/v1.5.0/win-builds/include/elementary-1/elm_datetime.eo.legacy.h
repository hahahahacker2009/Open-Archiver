#ifndef _ELM_DATETIME_EO_LEGACY_H_
#define _ELM_DATETIME_EO_LEGACY_H_


/**
 *
 * Set the datetime format. Format is a combination of allowed Libc date format
 * specifiers like: "%b %d, %Y %I : %M %p".
 *
 * Maximum allowed format length is 64 chars.
 *
 * Format can include separators for each individual datetime field except
 * for AM/PM field.
 *
 * Each separator can be a maximum of 6 UTF-8 bytes.
 * Space is also taken as a separator.
 *
 * Following are the allowed set of format specifiers for each datetime field.
 *
 * @b %%Y : The year as a decimal number including the century.
 *
 * @b %%y : The year as a decimal number without a century (range 00 to 99).
 *
 * @b %%m : The month as a decimal number (range 01 to 12).
 *
 * @b %%b : The abbreviated month name according to the current locale.
 *
 * @b %%B : The full month name according to the current locale.
 *
 * @b %%h : The abbreviated month name according to the current locale(same as %%b).
 *
 * @b %%d : The day of the month as a decimal number (range 01 to 31).
 *
 * @b %%e : The day of the month as a decimal number (range 1 to 31). single
 * digits are preceded by a blank.
 *
 * @b %%I : The hour as a decimal number using a 12-hour clock (range 01 to 12).
 *
 * @b %%H : The hour as a decimal number using a 24-hour clock (range 00 to 23).
 *
 * @b %%k : The hour (24-hour clock) as a decimal number (range 0 to 23). single
 * digits are preceded by a blank.
 *
 * @b %%l : The hour (12-hour clock) as a decimal number (range 1 to 12); single
 * digits are preceded by a blank.
 *
 * @b %%M : The minute as a decimal number (range 00 to 59).
 *
 * @b %%p : Either 'AM' or 'PM' according to the given time value, or the
 * corresponding strings for the current locale. Noon is treated as 'PM'
 * and midnight as 'AM'.
 *
 * @b %%P : Like %p but in lower case: 'am' or 'pm' or a corresponding string for
 * the current locale.
 *
 * @b %%c : The preferred date and time representation for the current locale.
 *
 * @b %%x : The preferred date representation for the current locale without the time.
 *
 * @b %%X : The preferred time representation for the current locale without the date.
 *
 * @b %%r : The complete calendar time using the AM/PM format of the current locale.
 *
 * @b %%R : The hour and minute in decimal numbers using the format %H:%M.
 *
 * @b %%T : The time of day in decimal numbers using the format %H:%M:%S.
 *
 * @b %%D : The date using the format %%m/%%d/%%y.
 *
 * @b %%F : The date using the format %%Y-%%m-%%d.
 *
 * These specifiers can be arranged in any order and the widget will display the
 * fields accordingly.
 *
 * Default format is taken as per the system locale settings.
 *
 * @see elm_datetime_format_get()
 * @ingroup Datetime
 *
 * @param[in] fmt The datetime format
 */
EAPI void elm_datetime_format_set(Eo *obj, const char *fmt);

/**
 *
 * Get the datetime format.
 *
 */
EAPI const char *elm_datetime_format_get(const Eo *obj);

/**
 *
 * @brief Set the field limits of a field.
 *
 * Limits can be set to individual fields, independently, except for AM/PM field.
 * Any field can display the values only in between these Minimum and Maximum limits unless
 * the corresponding time value is restricted from MinTime to MaxTime.
 * That is, Min/ Max field limits always works under the limitations of MinTime/ MaxTime.
 *
 * There is no provision to set the limits of AM/PM field.
 *
 * @see elm_datetime_field_limit_set()
 * @ingroup Datetime
 *
 * @param[in] fieldtype Type of the field. ELM_DATETIME_YEAR etc.
 * @param[in] min Reference to field's minimum value
 * @param[in] max Reference to field's maximum value
 */
EAPI void elm_datetime_field_limit_set(Eo *obj, Elm_Datetime_Field_Type fieldtype, int min, int max);

/**
 *
 * @brief Get the field limits of a field.
 *
 * Limits can be set to individual fields, independently, except for AM/PM field.
 * Any field can display the values only in between these Minimum and Maximum limits unless
 * the corresponding time value is restricted from MinTime to MaxTime.
 * That is, Min/ Max field limits always works under the limitations of MinTime/ MaxTime.
 *
 * There is no provision to set the limits of AM/PM field.
 *
 * @see elm_datetime_field_limit_set()
 * @ingroup Datetime
 *
 * @param[in] fieldtype Type of the field. ELM_DATETIME_YEAR etc.
 * @param[out] min Reference to field's minimum value
 * @param[out] max Reference to field's maximum value
 */
EAPI void elm_datetime_field_limit_get(const Eo *obj, Elm_Datetime_Field_Type fieldtype, int *min, int *max);

/**
 *
 * @brief Set the lower boundary of a field.
 *
 * Year: years since 1900. Negative value represents year below 1900 (year
 * value -30 represents 1870). Year default range is from 70 to 137.
 *
 * Month: default value range is from 0 to 11.
 *
 * Date: default value range is from 1 to 31 according to the month value.
 *
 * Hour: default value will be in terms of 24 hr format (0~23)
 *
 * Minute: default value range is from 0 to 59.
 *
 * @return @c EINA_TRUE if minimum value is accepted.
 *
 * @see elm_datetime_value_min_get()
 * @ingroup Datetime
 *
 * @param[in] mintime Time structure containing the minimum time value.
 */
EAPI Eina_Bool elm_datetime_value_min_set(Eo *obj, const struct tm *mintime);

/**
 *
 * @brief Get the lower boundary of a field.
 *
 * Year: years since 1900. Negative value represents year below 1900 (year
 * value -30 represents 1870). Year default range is from 70 to 137.
 *
 * Month: default value range is from 0 to 11.
 *
 * Date: default value range is from 1 to 31 according to the month value.
 *
 * Hour: default value will be in terms of 24 hr format (0~23)
 *
 * Minute: default value range is from 0 to 59.
 *
 * @return @c EINA_TRUE if minimum value is successfully returned.
 *
 * @see elm_datetime_value_min_set()
 * @ingroup Datepicker
 *
 * @param[inout] mintime Time structure.
 */
EAPI Eina_Bool elm_datetime_value_min_get(const Eo *obj, struct tm *mintime);

/**
 *
 * @brief Set the current value of a Datetime object.
 *
 * Year: years since 1900. Negative value represents year below 1900 (year
 * value -30 represents 1870). Year default range is from 70 to 137.
 *
 * Month: default value range is from 0 to 11.
 *
 * Date: default value range is from 1 to 31 according to the month value.
 *
 * Hour: default value will be in terms of 24 hr format (0~23)
 *
 * Minute: default value range is from 0 to 59.
 *
 *
 * @return @c EINA_TRUE if current time is set successfully.
 *
 * @see elm_datetime_value_set()
 * @ingroup Datetime
 *
 * @param[in] newtime Time structure filled with values to be set.
 */
EAPI Eina_Bool elm_datetime_value_set(Eo *obj, const struct tm *newtime);

/**
 *
 * @brief Get the current value of a Datetime object.
 *
 * Year: years since 1900. Negative value represents year below 1900 (year
 * value -30 represents 1870). Year default range is from 70 to 137.
 *
 * Month: default value range is from 0 to 11.
 *
 * Date: default value range is from 1 to 31 according to the month value.
 *
 * Hour: default value will be in terms of 24 hr format (0~23)
 *
 * Minute: default value range is from 0 to 59.
 *
 * @return @c EINA_TRUE if current time is returned successfully.
 *
 * @see elm_datetime_value_set()
 * @ingroup Datetime
 *
 * @param[inout] currtime Time structure.
 */
EAPI Eina_Bool elm_datetime_value_get(const Eo *obj, struct tm *currtime);

/**
 *
 * @brief Set a field to be visible or not.
 * Setting this API True does not ensure that the field is visible, apart from
 * this, the field's format must be present in Datetime overall format.
 * If a field's visibility is set to False then it won't appear even though
 * its format is present in overall format.
 * So if and only if this API is set true and the corresponding field's format
 * is present in Datetime format, the field is visible.
 *
 * By default the field visibility is set to True.
 *
 * @see elm_datetime_field_visible_get()
 * @ingroup Datetime
 *
 * @param[in] fieldtype Type of the field. ELM_DATETIME_YEAR etc.
 * @param[in] visible @c EINA_TRUE field can be visible, @c EINA_FALSE otherwise.
 */
EAPI void elm_datetime_field_visible_set(Eo *obj, Elm_Datetime_Field_Type fieldtype, Eina_Bool visible);

/**
 *
 * @brief Get whether a field can be visible/not
 *
 * @return bool @c EINA_TRUE, if field can be visible. @c EINA_FALSE otherwise.
 *
 * @see elm_datetime_field_visible_set()
 * @ingroup Datetime
 *
 * @param[in] fieldtype Type of the field. ELM_DATETIME_YEAR etc
 */
EAPI Eina_Bool elm_datetime_field_visible_get(const Eo *obj, Elm_Datetime_Field_Type fieldtype);

/**
 *
 * @brief Set the upper boundary of a field.
 *
 * Year: years since 1900. Negative value represents year below 1900 (year
 * value -30 represents 1870). Year default range is from 70 to 137.
 *
 * Month: default value range is from 0 to 11.
 *
 * Date: default value range is from 1 to 31 according to the month value.
 *
 * Hour: default value will be in terms of 24 hr format (0~23)
 *
 * Minute: default value range is from 0 to 59.
 *
 * @return @c EINA_TRUE if maximum value is accepted.
 *
 * @see elm_datetime_value_max_get()
 * @ingroup Datetime
 *
 * @param[in] maxtime Time structure containing the maximum time value.
 */
EAPI Eina_Bool elm_datetime_value_max_set(Eo *obj, const struct tm *maxtime);

/**
 *
 * @brief Get the upper boundary of a field.
 *
 * Year: years since 1900. Negative value represents year below 1900 (year
 * value -30 represents 1870). Year default range is from 70 to 137.
 *
 * Month: default value range is from 0 to 11.
 *
 * Date: default value range is from 1 to 31 according to the month value.
 *
 * Hour: default value will be in terms of 24 hr format (0~23)
 *
 * Minute: default value range is from 0 to 59.
 *
 * @return @c EINA_TRUE if maximum value is returned successfully.
 *
 * @see elm_datetime_value_max_set()
 * @ingroup Datetime
 *
 * @param[inout] maxtime Time structure containing the maximum time value.
 */
EAPI Eina_Bool elm_datetime_value_max_get(const Eo *obj, struct tm *maxtime);

#endif
