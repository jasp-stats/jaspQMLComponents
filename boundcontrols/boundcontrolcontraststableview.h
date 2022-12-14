//
// Copyright (C) 2013-2021 University of Amsterdam
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as
// published by the Free Software Foundation, either version 3 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public
// License along with this program.  If not, see
// <http://www.gnu.org/licenses/>.
//

#ifndef BOUNDCONTROLCONTRASTSTABLEVIEW_H
#define BOUNDCONTROLCONTRASTSTABLEVIEW_H

#include "boundcontroltableview.h"

class BoundControlContrastsTableView : public BoundControlTableView
{
public:
	BoundControlContrastsTableView(TableViewBase* tableView);

	Json::Value		createJson()																		const	override;
	void			fillTableTerms(const Json::Value& value, ListModelTableViewBase::TableTerms& tableTerms)	override;
	void			fillBoundValue(Json::Value& value, const ListModelTableViewBase::TableTerms& tableTerms)	override;
};

#endif // BOUNDCONTROLCONTRASTSTABLEVIEW_H
