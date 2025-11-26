/*  ===================================================================
*                         HtmlGen++
*            Copyright (c) 2015-2024 Peter Ritter
*                  Licensed under MIT License
*  ====================================================================
*/

#ifndef HTML_GEN__INCLUDED
#define HTML_GEN__INCLUDED

// Version information
#define HTML_GEN_VERSION_MAJOR 1
#define HTML_GEN_VERSION_MINOR 0
#define HTML_GEN_VERSION_PATCH 0
#define HTML_GEN_VERSION_STRING "1.0.0"

// Core includes - order matters for dependencies
#include "html_forward.h"
#include "html_core.h"

// Element includes - can be in any order
#include "html_basic.h"
#include "html_table.h"
#include "html_form.h"
#include "html_semantic.h"
#include "html_media.h"
#include "html_interactive.h"
#include "html_misc.h"

// Namespace alias to allow htmlgen::html:: prefix
namespace htmlgen {
    namespace html = ::html;
}

#endif
