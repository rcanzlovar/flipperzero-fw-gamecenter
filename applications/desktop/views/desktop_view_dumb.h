#pragma once

#include "../desktop_settings/desktop_settings.h"
#include "../views/desktop_events.h"
#include <gui/view.h>

typedef struct DesktopViewDumb DesktopViewDumb;

typedef void (*DesktopViewDumbCallback)(DesktopEvent event, void* context);

void desktop_view_dumb_set_callback(
    DesktopViewDumb* dumb_view,
    DesktopViewDumbCallback callback,
    void* context);
void desktop_view_dumb_update(DesktopViewDumb* dumb_view);
View* desktop_view_dumb_get_view(DesktopViewDumb* dumb_view);
DesktopViewDumb* desktop_view_dumb_alloc();
void desktop_view_dumb_free(DesktopViewDumb* dumb_view);
void desktop_view_dumb_lock(DesktopViewDumb* dumb_view, bool pin_locked);
void desktop_view_dumb_unlock(DesktopViewDumb* dumb_view);
void desktop_view_dumb_close_doors(DesktopViewDumb* dumb_view);
bool desktop_view_dumb_is_dumb_hint_visible(DesktopViewDumb* dumb_view);
