/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * smartmaticgui
 * Copyright (C)  2011 <>
 * 
 * smartmaticgui is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * smartmaticgui is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "choose-dialog-button-info.h"

using namespace Smartmatic::GUI::Widgets;

ChooseDialogButtonInfo::ChooseDialogButtonInfo(std::string name, std::string imagePath, std::string code, std::string option)
{
	this->name = name;
    this->imagePath = imagePath;
    this->code = code;
    this->option = option;
}

ChooseDialogButtonInfo::~ChooseDialogButtonInfo()
{

}

std::string ChooseDialogButtonInfo::getName()
{
	return name;
}

std::string ChooseDialogButtonInfo::getImagePath()
{
	return imagePath;
}
	
std::string ChooseDialogButtonInfo::getCode()
{
	return code;
}
	
std::string ChooseDialogButtonInfo::getOption()
{
	return option;
}
