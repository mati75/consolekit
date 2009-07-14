/* Generated by dbus-binding-tool; do not edit! */


#ifndef __dbus_glib_marshal_ck_seat_MARSHAL_H__
#define __dbus_glib_marshal_ck_seat_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

#ifdef G_ENABLE_DEBUG
#define g_marshal_value_peek_boolean(v)  g_value_get_boolean (v)
#define g_marshal_value_peek_char(v)     g_value_get_char (v)
#define g_marshal_value_peek_uchar(v)    g_value_get_uchar (v)
#define g_marshal_value_peek_int(v)      g_value_get_int (v)
#define g_marshal_value_peek_uint(v)     g_value_get_uint (v)
#define g_marshal_value_peek_long(v)     g_value_get_long (v)
#define g_marshal_value_peek_ulong(v)    g_value_get_ulong (v)
#define g_marshal_value_peek_int64(v)    g_value_get_int64 (v)
#define g_marshal_value_peek_uint64(v)   g_value_get_uint64 (v)
#define g_marshal_value_peek_enum(v)     g_value_get_enum (v)
#define g_marshal_value_peek_flags(v)    g_value_get_flags (v)
#define g_marshal_value_peek_float(v)    g_value_get_float (v)
#define g_marshal_value_peek_double(v)   g_value_get_double (v)
#define g_marshal_value_peek_string(v)   (char*) g_value_get_string (v)
#define g_marshal_value_peek_param(v)    g_value_get_param (v)
#define g_marshal_value_peek_boxed(v)    g_value_get_boxed (v)
#define g_marshal_value_peek_pointer(v)  g_value_get_pointer (v)
#define g_marshal_value_peek_object(v)   g_value_get_object (v)
#else /* !G_ENABLE_DEBUG */
/* WARNING: This code accesses GValues directly, which is UNSUPPORTED API.
 *          Do not access GValues directly in your code. Instead, use the
 *          g_value_get_*() functions
 */
#define g_marshal_value_peek_boolean(v)  (v)->data[0].v_int
#define g_marshal_value_peek_char(v)     (v)->data[0].v_int
#define g_marshal_value_peek_uchar(v)    (v)->data[0].v_uint
#define g_marshal_value_peek_int(v)      (v)->data[0].v_int
#define g_marshal_value_peek_uint(v)     (v)->data[0].v_uint
#define g_marshal_value_peek_long(v)     (v)->data[0].v_long
#define g_marshal_value_peek_ulong(v)    (v)->data[0].v_ulong
#define g_marshal_value_peek_int64(v)    (v)->data[0].v_int64
#define g_marshal_value_peek_uint64(v)   (v)->data[0].v_uint64
#define g_marshal_value_peek_enum(v)     (v)->data[0].v_long
#define g_marshal_value_peek_flags(v)    (v)->data[0].v_ulong
#define g_marshal_value_peek_float(v)    (v)->data[0].v_float
#define g_marshal_value_peek_double(v)   (v)->data[0].v_double
#define g_marshal_value_peek_string(v)   (v)->data[0].v_pointer
#define g_marshal_value_peek_param(v)    (v)->data[0].v_pointer
#define g_marshal_value_peek_boxed(v)    (v)->data[0].v_pointer
#define g_marshal_value_peek_pointer(v)  (v)->data[0].v_pointer
#define g_marshal_value_peek_object(v)   (v)->data[0].v_pointer
#endif /* !G_ENABLE_DEBUG */


/* BOOLEAN:POINTER,POINTER (/tmp/dbus-binding-tool-c-marshallers.33NIYT:1) */
extern void dbus_glib_marshal_ck_seat_BOOLEAN__POINTER_POINTER (GClosure     *closure,
                                                                GValue       *return_value,
                                                                guint         n_param_values,
                                                                const GValue *param_values,
                                                                gpointer      invocation_hint,
                                                                gpointer      marshal_data);
void
dbus_glib_marshal_ck_seat_BOOLEAN__POINTER_POINTER (GClosure     *closure,
                                                    GValue       *return_value,
                                                    guint         n_param_values,
                                                    const GValue *param_values,
                                                    gpointer      invocation_hint,
                                                    gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__POINTER_POINTER) (gpointer     data1,
                                                             gpointer     arg_1,
                                                             gpointer     arg_2,
                                                             gpointer     data2);
  register GMarshalFunc_BOOLEAN__POINTER_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 3);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__POINTER_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_pointer (param_values + 1),
                       g_marshal_value_peek_pointer (param_values + 2),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* NONE:BOXED,POINTER (/tmp/dbus-binding-tool-c-marshallers.33NIYT:2) */
extern void dbus_glib_marshal_ck_seat_VOID__BOXED_POINTER (GClosure     *closure,
                                                           GValue       *return_value,
                                                           guint         n_param_values,
                                                           const GValue *param_values,
                                                           gpointer      invocation_hint,
                                                           gpointer      marshal_data);
void
dbus_glib_marshal_ck_seat_VOID__BOXED_POINTER (GClosure     *closure,
                                               GValue       *return_value,
                                               guint         n_param_values,
                                               const GValue *param_values,
                                               gpointer      invocation_hint,
                                               gpointer      marshal_data)
{
  typedef void (*GMarshalFunc_VOID__BOXED_POINTER) (gpointer     data1,
                                                    gpointer     arg_1,
                                                    gpointer     arg_2,
                                                    gpointer     data2);
  register GMarshalFunc_VOID__BOXED_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;

  g_return_if_fail (n_param_values == 3);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_VOID__BOXED_POINTER) (marshal_data ? marshal_data : cc->callback);

  callback (data1,
            g_marshal_value_peek_boxed (param_values + 1),
            g_marshal_value_peek_pointer (param_values + 2),
            data2);
}
#define dbus_glib_marshal_ck_seat_NONE__BOXED_POINTER	dbus_glib_marshal_ck_seat_VOID__BOXED_POINTER

G_END_DECLS

#endif /* __dbus_glib_marshal_ck_seat_MARSHAL_H__ */

#include <dbus/dbus-glib.h>
static const DBusGMethodInfo dbus_glib_ck_seat_methods[] = {
  { (GCallback) ck_seat_get_id, dbus_glib_marshal_ck_seat_BOOLEAN__POINTER_POINTER, 0 },
  { (GCallback) ck_seat_get_sessions, dbus_glib_marshal_ck_seat_BOOLEAN__POINTER_POINTER, 53 },
  { (GCallback) ck_seat_get_devices, dbus_glib_marshal_ck_seat_BOOLEAN__POINTER_POINTER, 118 },
  { (GCallback) ck_seat_get_active_session, dbus_glib_marshal_ck_seat_BOOLEAN__POINTER_POINTER, 184 },
  { (GCallback) ck_seat_can_activate_sessions, dbus_glib_marshal_ck_seat_BOOLEAN__POINTER_POINTER, 249 },
  { (GCallback) ck_seat_activate_session, dbus_glib_marshal_ck_seat_NONE__BOXED_POINTER, 325 },
};

const DBusGObjectInfo dbus_glib_ck_seat_object_info = {
  0,
  dbus_glib_ck_seat_methods,
  6,
"org.freedesktop.ConsoleKit.Seat\0GetId\0S\0sid\0O\0F\0N\0o\0\0org.freedesktop.ConsoleKit.Seat\0GetSessions\0S\0sessions\0O\0F\0N\0ao\0\0org.freedesktop.ConsoleKit.Seat\0GetDevices\0S\0devices\0O\0F\0N\0a(ss)\0\0org.freedesktop.ConsoleKit.Seat\0GetActiveSession\0S\0ssid\0O\0F\0N\0o\0\0org.freedesktop.ConsoleKit.Seat\0CanActivateSessions\0S\0can_activate\0O\0F\0N\0b\0\0org.freedesktop.ConsoleKit.Seat\0ActivateSession\0A\0ssid\0I\0o\0\0\0",
"org.freedesktop.ConsoleKit.Seat\0ActiveSessionChanged\0org.freedesktop.ConsoleKit.Seat\0SessionAdded\0org.freedesktop.ConsoleKit.Seat\0SessionRemoved\0org.freedesktop.ConsoleKit.Seat\0DeviceAdded\0org.freedesktop.ConsoleKit.Seat\0DeviceRemoved\0\0",
"\0"
};

