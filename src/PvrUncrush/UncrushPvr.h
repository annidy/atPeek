/*
 
 QuickLook plugin for PVR images
 Copyright (C) 2008  atPurpose
 
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>
 
 */

#include <ApplicationServices/ApplicationServices.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
	uint32_t width;
	uint32_t height;
	uint32_t depth;
	uint32_t mipmapsCount;
}
PvrInfo;

void GetPvrInfo(CFURLRef url, PvrInfo *info);
CGImageRef GetPvrImage(CFURLRef url, CFStringRef contentTypeUTI);
void FixPvrImageIfNeeded(char *path, char *pathFixed);

#ifdef __cplusplus
}
#endif
