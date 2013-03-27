/**
 * Copyright (c) 2000-2013 Liferay, Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2.1 of the License, or (at your option)
 * any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 */

 #define CONTEXT_MENU_GUID				L"{0DD5B4B0-25AF-4e09-A46B-9F274F3D7000}"

//DLL Registration information
#define REGISTRY_ALL_CONTEXT_MENU		L"*\\shellex\\ContextMenuHandlers\\LiferayNativityContextMenus"
#define REGISTRY_FOLDER_CONTEXT_MENU	L"Folder\\shellex\\ContextMenuHandlers\\LiferaySyncContextMenus"
#define REGISTRY_CLSID					L"CLSID"
#define REGISTRY_IN_PROCESS				L"InprocServer32"
#define REGISTRY_THREADING				L"ThreadingModel"
#define REGISTRY_APARTMENT				L"Apartment"
#define REGISTRY_VERSION				L"Version"
#define REGISTRY_VERSION_NUMBER			L"1.0"

//Menu Util
#define SEPARATOR						L"-"

//Remote Functions
#define GET_MENU_LIST					L"getMenuList"
#define PERFORM_ACTION					L"performAction"
#define GET_HELP_ITEMS					L"getHelpItemsForMenus"
#define PORT							33001