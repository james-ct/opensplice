/*
 *                         Vortex OpenSplice
 *
 *   This software and documentation are Copyright 2006 to TO_YEAR ADLINK
 *   Technology Limited, its affiliated companies and licensors. All rights
 *   reserved.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 */
#ifndef IDL_GENCXXTYPEDINTERFACES_H
#define IDL_GENCXXTYPEDINTERFACES_H

#include "idl_genCorbaCxxHelper.h"
#include "idl_program.h"

typedef enum {
    IDL_INTERFACE_H,
    IDL_INTERFACE_CPP
} idl_cxxInterfaceSelector;

idl_program idl_genCxxIntefacesProgram (void *userData);

#endif /* IDL_GENCXXTYPEDINTERFACES_H */