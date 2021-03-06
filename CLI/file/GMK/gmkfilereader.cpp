/**
* @file gmkfilereader.cpp
* @brief Source file of the GMK file reader.
*
* Write a description about the file here...
*
* @section License
*
* Copyright (C) 2013 Robert B. Colton
*
* This file is a part of the ENIGMA Development Environment.
*
* ENIGMA is free software: you can redistribute it and/or modify it under the
* terms of the GNU General Public License as published by the Free Software
* Foundation, version 3 of the license or any later version.
*
* This application and its source code is distributed AS-IS, WITHOUT ANY
* WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
* FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
* details.
*
* You should have received a copy of the GNU General Public License along
* with this code. If not, see <http://www.gnu.org/licenses/>
**/

#include <gmk.hpp>
#include "gmkfilereader.h"
#include "printcolors.h"

EnigmaStruct* loadGMK(char* path)
{
    GMKFile gmk;
    return gmk.load(path);
}

EnigmaStruct* GMKFile::load(char* path)
{
    es = new EnigmaStruct();
    
    Gmk::GmkFile* gmk = new Gmk::GmkFile();
    if (!gmk->Load(path))
    	return NULL;
	
	delete gmk;

    return es;
}
