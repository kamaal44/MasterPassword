//==============================================================================
// This file is part of Master Password.
// Copyright (c) 2011-2017, Maarten Billemont.
//
// Master Password is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Master Password is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You can find a copy of the GNU General Public License in the
// LICENSE file.  Alternatively, see <http://www.gnu.org/licenses/>.
//==============================================================================

#import "MPAppDelegate_Shared.h"

@interface MPAppDelegate_Shared(Key)

- (BOOL)signInAsUser:(MPUserEntity *)user saveInContext:(NSManagedObjectContext *)moc usingMasterPassword:(NSString *)password;
- (void)signOutAnimated:(BOOL)animated;

- (void)storeSavedKeyFor:(MPUserEntity *)user;
- (void)forgetSavedKeyFor:(MPUserEntity *)user;

@end