#ifndef _ELM_INTERFACE_ATSPI_SELECTION_EO_H_
#define _ELM_INTERFACE_ATSPI_SELECTION_EO_H_

#ifndef _ELM_INTERFACE_ATSPI_SELECTION_EO_TYPES
#define _ELM_INTERFACE_ATSPI_SELECTION_EO_TYPES


#endif
#define ELM_INTERFACE_ATSPI_SELECTION_INTERFACE elm_interface_atspi_selection_interface_get()

const Eo_Class *elm_interface_atspi_selection_interface_get(void) EINA_CONST;

#ifdef ELM_INTERFACE_ATSPI_SELECTION_PROTECTED
/**
 *
 * No description supplied.
 *
 *
 */
EOAPI int  elm_interface_atspi_selection_selected_children_count_get(void);
#endif

#ifdef ELM_INTERFACE_ATSPI_SELECTION_PROTECTED
/**
 *
 * No description supplied.
 *
 * @param[in] selected_child_index index of selected child
 *
 */
EOAPI Eo * elm_interface_atspi_selection_selected_child_get(int selected_child_index);
#endif

#ifdef ELM_INTERFACE_ATSPI_SELECTION_PROTECTED
/**
 *
 * No description supplied.
 *
 * @param[in] child_index No description supplied.
 *
 */
EOAPI Eina_Bool  elm_interface_atspi_selection_child_select(int child_index);
#endif

#ifdef ELM_INTERFACE_ATSPI_SELECTION_PROTECTED
/**
 *
 * No description supplied.
 *
 * @param[in] child_index No description supplied.
 *
 */
EOAPI Eina_Bool  elm_interface_atspi_selection_selected_child_deselect(int child_index);
#endif

#ifdef ELM_INTERFACE_ATSPI_SELECTION_PROTECTED
/**
 *
 * No description supplied.
 *
 * @param[in] child_index No description supplied.
 *
 */
EOAPI Eina_Bool  elm_interface_atspi_selection_is_child_selected(int child_index);
#endif

#ifdef ELM_INTERFACE_ATSPI_SELECTION_PROTECTED
/**
 *
 * No description supplied.
 *
 *
 */
EOAPI Eina_Bool  elm_interface_atspi_selection_all_children_select(void);
#endif

#ifdef ELM_INTERFACE_ATSPI_SELECTION_PROTECTED
/**
 *
 * No description supplied.
 *
 *
 */
EOAPI Eina_Bool  elm_interface_atspi_selection_clear(void);
#endif

#ifdef ELM_INTERFACE_ATSPI_SELECTION_PROTECTED
/**
 *
 * No description supplied.
 *
 * @param[in] child_index No description supplied.
 *
 */
EOAPI Eina_Bool  elm_interface_atspi_selection_child_deselect(int child_index);
#endif

EOAPI extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_SELECTION_EVENT_SELECTION_CHANGED;

/**
 * Called when selection has been changed.
 */
#define ELM_INTERFACE_ATSPI_SELECTION_EVENT_SELECTION_CHANGED (&(_ELM_INTERFACE_ATSPI_SELECTION_EVENT_SELECTION_CHANGED))

#endif
